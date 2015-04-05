#include "addfiledlg.h"
#include "previewimagedlg.h"
#include "ui_addfiledlg.h"
#include <QFileDialog>
#include <QDebug>
#include <QString>

AddFileDlg::AddFileDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddFileDlg)
{
    ui->setupUi(this);

}

AddFileDlg::~AddFileDlg()
{
    delete ui;
}

void AddFileDlg::on_wBtnAddImage_clicked()
{
    QString imageFileName=QFileDialog::getOpenFileName(this,tr("选择图片"),"C:",tr("图片文件(*png *jpg)"));
    imageFileNames.append(imageFileName);
    ui->wLblImageAmount->setText(tr("%1 is Added.").arg(imageFileNames.size()));
    //qDebug()<<imageFileNames;
}

void AddFileDlg::on_wBtnPreviewImage_clicked()
{
    PreviewImageDlg*previewImageDlg=new PreviewImageDlg(imageFileNames,this);
    //this->close();
    previewImageDlg->exec();
}

void AddFileDlg::on_pushButton_clicked()
{
    ui->wLetIndexDel->
