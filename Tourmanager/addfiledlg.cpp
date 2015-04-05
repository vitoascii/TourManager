#include "addfiledlg.h"
#include "previewimagedlg.h"
#include "ui_addfiledlg.h"
#include <QFileDialog>
#include <QDebug>
#include <QString>
#include <QStandardPaths>
#include <QMessageBox>

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
    previewImageDlg->setWindowTitle("预览");
    previewImageDlg->exec();
}

void AddFileDlg::on_wBtnDelete_clicked()
{
    if(imageFileNames.size()!=0)
    {
        int delIndex=ui->wLetIndexDel->text().toInt();
        imageFileNames.removeAt(delIndex-1);
        ui->wLblImageAmount->setText(tr("%1 is Added.").arg(imageFileNames.size()));
    }
}

void AddFileDlg::on_wBtnSubmit_clicked()
{
    QDir *saveDir = new QDir;
    QString documentsLocation=QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)
            .append("/tourManaer_dairy");
    //qDebug()<<documentsLocation;
    if(saveDir->exists(documentsLocation))
        saveFile(documentsLocation);
    else
    {
         if(saveDir->mkdir(documentsLocation))
             saveFile(documentsLocation);
         else
             QMessageBox::warning(this,tr("Can't save dairy!"),tr("Failed to create direction!-1"));
    }
}
/*
 * 保存的文件格式为：时间地点/序号/标题.txt+图片文件夹，根目录Mydocument/tourManager_dairy
 * 如Mydocument/tourManager_dairy/20010101武汉/01/今天我真高兴.txt
 * Mydocument/tourManager_dairy/20010101武汉/01/Image/01.jpg
 */
void  AddFileDlg::saveFile(QString documentsLocation)
{
    //获取日期
    QDateTimeEdit*dateTimeEdit=ui->wDetDate;
    QString date = dateTimeEdit->date().toString(Qt::ISODate);

    //获取地点
    QString place=ui->wLetPlace->text();
    //qDebug()<<place;

    //判断文件夹是否存在
    QDir *saveDir = new QDir;
    QString saveLocation=documentsLocation.append(tr("/%1%2").arg(date).arg(place));
    if(!saveDir->exists(saveLocation))
    {
        if(!saveDir->mkdir(saveLocation))
            QMessageBox::warning(this,tr("Can't save dairy!"),tr("Failed to create direction!-2"));
    }
    //文件夹下新建一个序号文件夹，以防一天内同一地点有多条日志
    int saveIndex=1;
    QString tempLocation;
    for(;1;saveIndex++)
    {
        tempLocation=saveLocation;
        if(!saveDir->exists(tempLocation.append(tr("/%1/").arg(saveIndex))))
        {

            saveLocation=saveLocation.append(tr("/%1/").arg(saveIndex));
            qDebug()<<saveLocation;
            if(!saveDir->mkdir(saveLocation))
                QMessageBox::warning(this,tr("Can't save dairy!"),tr("Failed to create direction!-3"));
            break;
        }
    }
    //获取日志文字内容及标题
    QString diaryText=ui->wTetText->toPlainText();
    QString diaryTitle=ui->wLetTitle->text();
    //保存
    QString textLocation=saveLocation;
    textLocation.append(diaryTitle.append(".txt"));
    //qDebug()<<diaryText;
    QFile*file=new QFile(textLocation);
    if(!file->open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QMessageBox::warning(this,tr("Can't save dairy!"),tr("Failed to create file!"));
        return;
    }
    QTextStream txtOutput(file);
    txtOutput<<diaryText<<endl;
    file->close();
}
