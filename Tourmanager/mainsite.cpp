#include "mainsite.h"
#include "ui_mainsite.h"
#include "addfiledlg.h"
#include "searchdlg.h"
#include "usemapdlg.h"

MainSite::MainSite(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainSite)
{
    ui->setupUi(this);
    this->setWindowTitle("首页");
}

MainSite::~MainSite()
{
    delete ui;
}

void MainSite::on_mBtnAddFile_clicked()
{
    AddFileDlg*addfileDlg=new AddFileDlg(this);
    //this->close();
    addfileDlg->exec();
}

void MainSite::on_mBtnSearch_clicked()
{
    SearchDlg*searchDlg=new SearchDlg(this);
    //this->close();
    searchDlg->exec();
}

void MainSite::on_mBtnUseMap_clicked()
{
    UseMapDlg*useMapDlg=new UseMapDlg(this);
    //this->close();
    useMapDlg->exec();
}
