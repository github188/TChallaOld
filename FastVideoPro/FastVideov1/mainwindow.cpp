#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "MyStyle.h"
#include <QStandardItemModel>
#include <QMessageBox>
#include <QMenu>
#include <QMouseEvent>
#include <Windows.h>
#include <tchar.h>
#include <shellapi.h>
#include <QProcess>
#include <QPicture>

#include "netdlg.h"
#include "filemanagerdlg.h"
#include "diskdlg.h"
#include "sharedlg.h"
#include "ftpdlg.h"
#include "AboutDialog.h"
#include "UpdateDialog.h"
#include "HelpDialog.h"
#include "VideoDownloader/maindialog.h"
#include "tooldlg.h"
#include "MessageBoxDlg.h"
#include "qss.h"
#include "settings.h"
#include "Verify.h"
#include "windowutils.h"
#include "videoserver.h"
#include "cwaitdlg.h"
QT_BEGIN_NAMESPACE
class QAction;
class QMenu;
class QMouseEvent;
QT_END_NAMESPACE


MainWindow::MainWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainWindow)
{
    qDebug() << __FUNCTION__ << __LINE__;
    ui->setupUi(this);


   // createAllDialog();

   setWindowFlags(Qt::FramelessWindowHint|Qt::WindowSystemMenuHint| Qt::WindowMinimizeButtonHint);

   ui->closeBtn->setStyleSheet(transparentBtn_StyleSheet);
   ui->minBtn->setStyleSheet(transparentBtn_StyleSheet);
   ui->moreBtn->setStyleSheet(transparentBtn_StyleSheet);

   this->setWindowIcon(QIcon(":/images/logoIcon.png"));

   QMenu *pMenu = new QMenu(QStringLiteral("menu"), ui->moreBtn);

   QAction *updateAct = new QAction(QIcon(":/images/Update.png"), QStringLiteral("��������"), this);
	QAction *helpAct = new QAction(QIcon(":/images/Help.png"), QStringLiteral("����"), this);
	QAction *aboutAct = new QAction(QIcon(":/images/About.png"), QStringLiteral("����"), this);

    setProductUi();

    pMenu->addAction(updateAct);
    pMenu->addSeparator();
    pMenu->addAction(helpAct);
    pMenu->addAction(aboutAct);

   //ui->moreBtn->setPopupMode(QToolButton::InstantPopup);
    ui->moreBtn->setMenu(pMenu);
  //  pMenu->setStyleSheet(Menu_StyleSheet);

    connect(ui->closeBtn,SIGNAL(clicked()),this,SLOT(onCloseClicked()));
    connect(ui->minBtn,SIGNAL(clicked()),this,SLOT(onMinClicked()));

	connect(aboutAct, SIGNAL(triggered()), this, SLOT(onAboutClicked()));
    connect(helpAct, SIGNAL(triggered()), this, SLOT(onHelpClicked()));
    connect(updateAct, SIGNAL(triggered()), this, SLOT(onUpdateClicked()));
    connect(ui->videoDownloadBtn,SIGNAL(clicked()),this,SLOT(onVideoBtnclicked()));
    connect(ui->diskBtn,SIGNAL(clicked()),this,SLOT(onDiskBtnclicked()));
    connect(ui->shareBtn,SIGNAL(clicked()),this,SLOT(onShareBtnclicked()));
  //  connect(ui->ftpBtn,SIGNAL(clicked()),this,SLOT(onFTPBtnclicked()));
	connect(ui->toolBtn, SIGNAL(clicked()), this, SLOT(onToolBtnclicked()));
	connect(ui->screenBtn, SIGNAL(clicked()), this, SLOT(onScreenBtnclicked()));
    connect(ui->fileBtn,SIGNAL(clicked()),this,SLOT(onFileBtnclicked()));
    connect(ui->netBtn,SIGNAL(clicked()),this,SLOT(onNetBtnclicked()));
    connect(ui->logBtn,SIGNAL(clicked()),this,SLOT(onLogBtnclicked()));
    mpVideoDownloadDlg = nullptr;
    qDebug()<<__FUNCTION__<<__LINE__;
    CWaitDlg::waitForDoing(this, QString::fromLocal8Bit("���ڼ���������..."), [=]()
    {
        videoserverFactory::getFactorys();

    }, [this](bool bCancel){ });
}

MainWindow::~MainWindow()
{
    qDebug() << "~uninit()";
    Verify::uninit();
	qDebug() << "~MainWindow()";
    if (nullptr != mpVideoDownloadDlg){
        delete mpVideoDownloadDlg;
    }
    delete ui;
    WindowUtils::terminateProcess("FastVideo");
}
void MainWindow::setProductUi(){
    if (!Settings::getItem(KEY_LOGO_FILE).isEmpty())
    {
        auto p = new QPixmap(Settings::getItem(KEY_LOGO_FILE));
        if (p->height() > 0 && p->width() > 0)
        {
            auto w = ui->logo->height() * p->width() / p->height();
            ui->logo->resize(w, ui->logo->height());
            QString s = ui->logo->styleSheet();
            QString url = QString("url(%1)").arg(Settings::getItem(KEY_LOGO_FILE).replace("\\", "/"));
            ui->logo->setStyleSheet(s.replace(QRegExp("url(.*)"), url));

            const QWidget* pParent = ui->logo->parentWidget();
            ui->logo->move((pParent->width() - ui->logo->width()) / 2 + pParent->x(), ui->logo->y());
        }
        
       // ui->logo->setPicture(*p);
    }
    else{
        ui->logo->setStyleSheet("border-image: url(:/images/logo.png)");
    }
    if (!Settings::getItem(KEY_PRDUCT_NAME).isEmpty())
    {
        ui->labelProduct->setText(Settings::getItem(KEY_PRDUCT_NAME));
    }
    else{
        ui->labelProduct->setText(QString::fromLocal8Bit("��Ƶ����������"));
    }
}
void MainWindow::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::onMinClicked()
{
    this->showMinimized();
}
bool MySystemShutDown()
{
    HANDLE hToken;
    TOKEN_PRIVILEGES tkp;
    
    //��ȡ���̱�־
    if (!OpenProcessToken(GetCurrentProcess(), TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &hToken))
        return false;
    
    //��ȡ�ػ���Ȩ��LUID
    LookupPrivilegeValue(NULL, SE_SHUTDOWN_NAME, &tkp.Privileges[0].Luid);
    tkp.PrivilegeCount = 1;
    tkp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;
    
    //��ȡ������̵Ĺػ���Ȩ
    AdjustTokenPrivileges(hToken, false, &tkp, 0, (PTOKEN_PRIVILEGES)NULL, 0);
    if (GetLastError() != ERROR_SUCCESS) return false;
    
    // ǿ�ƹرռ����
    if (!ExitWindowsEx(EWX_SHUTDOWN | EWX_FORCE, 0))
        return false;
    return true;
}
void MainWindow::onCloseClicked()
{
    MessageBoxDlg msgDlg(QString::fromLocal8Bit("�Ƿ�Ҫ�ػ�?"), MsgButton::Yes, MsgButton::No);
    msgDlg.exec();
    if (msgDlg.isConfirm() != MsgButton::Yes)
    {
        return;
    }
    if (nullptr != mpVideoDownloadDlg){
        delete mpVideoDownloadDlg;
        mpVideoDownloadDlg = nullptr;
    }
    MySystemShutDown();
}

void MainWindow::onAboutClicked()
{
	AboutDialog aboutDlg(this);
	//aboutDlg.setTitleName(QStringLiteral("����"));
	aboutDlg.exec();
}
void MainWindow::onHelpClicked()
{
    QString toolDir(QApplication::applicationDirPath() + "/tool");
    QProcess::startDetached(toolDir + "/pdfreader.exe " + toolDir + "/user.pdf");
}
void MainWindow::onUpdateClicked()
{
    UpdateDialog dlg(this);
    dlg.exec();
}

void MainWindow::mousePressEvent(QMouseEvent* event)
{
	QDialog::mousePressEvent(event);
    if(event->button() == Qt::LeftButton)
    {
        mMoving = true;
        mLastMousePosition = event->globalPos();
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent* event)
{
	QDialog::mouseMoveEvent(event);
    if( event->buttons().testFlag(Qt::LeftButton) && mMoving)
    {
       // this->move(this->pos() + (event->globalPos() - mLastMousePosition));
       // mLastMousePosition = event->globalPos();
    }
}

void MainWindow::showEvent(QShowEvent* event)
{
	QWidget* pParent = this->parentWidget();
	if (pParent == NULL)
	{
		pParent = (QWidget*)QApplication::desktop();
	}
	this->move((pParent->width() - this->width()) / 2, (pParent->height() - this->height()) / 2);
	QDialog::showEvent(event);
}

void MainWindow::mouseReleaseEvent(QMouseEvent* event)
{
	QDialog::mouseReleaseEvent(event);
    if(event->button() == Qt::LeftButton)
    {
        mMoving = false;
    }
}
void execDlg(MainDialog& dlg)
{
    __try{
        dlg.exec();
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        std::cout << "execDlg unkonw error!" << std::endl;
        //Log::add("execDlg unkonw error!", fatal);
       // exit(-1);
    }
}
void MainWindow::onVideoBtnclicked()
{
    if (nullptr == mpVideoDownloadDlg){
        mpVideoDownloadDlg = new MainDialog(this);
        mpVideoDownloadDlg->setTitleName(QStringLiteral("��Ƶ����"));
    }
    execDlg(*mpVideoDownloadDlg);
}

void MainWindow::onDiskBtnclicked()
{
	DiskDlg diskDlg(this);
    diskDlg.setTitleName(QStringLiteral("���̵���"));
    diskDlg.exec();
}

void MainWindow::onShareBtnclicked()
{
	ShareDlg shareDlg(this);
    shareDlg.setTitleName(QStringLiteral("��������"));
    shareDlg.exec();
}

void MainWindow::onFTPBtnclicked()
{
	FTPDlg ftpDlg(this);
   ftpDlg.setTitleName(QStringLiteral("FTP����"));
   ftpDlg.exec();
}

void MainWindow::onToolBtnclicked()
{
	tooldlg toolDlg1(this);
	toolDlg1.setTitleName(QStringLiteral("��������"));
	toolDlg1.exec();
    setProductUi();
}

void MainWindow::onScreenBtnclicked()
{
	ShellExecuteA(GetDesktopWindow(), "open", "screenRecord\\ScreenCap.exe",NULL, NULL, SW_SHOWNORMAL);

}


void MainWindow::onFileBtnclicked()
{
	FileManagerDlg fileDlg(this);
	fileDlg.setTitleName(QStringLiteral("�ļ�����"));
    fileDlg.exec();
}

void MainWindow::onNetBtnclicked()
{
	netDlg netDlg_(this);
	 netDlg_.setTitleName(QStringLiteral("��������"));
     netDlg_.exec();
}

void MainWindow::onLogBtnclicked()
{
     logManagerDlg logDlg(this);
	 logDlg.setTitleName(QStringLiteral("��־����"));//QLatin1String ����ʾ����
     logDlg.exec();
}