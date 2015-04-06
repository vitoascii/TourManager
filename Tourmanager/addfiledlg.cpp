#include "addfiledlg.h"
#include "previewimagedlg.h"
#include "ui_addfiledlg.h"
#include <QFileDialog>
#include <QDebug>
#include <QString>
#include <QStandardPaths>
#include <QMessageBox>
#include <QBuffer>
#include <QByteArray>
#include <QGridLayout>

AddFileDlg::AddFileDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddFileDlg)
{
    ui->setupUi(this);
    this->setWindowTitle("Write Dairy");
    QGridLayout*layout=new QGridLayout;
    layout->addWidget(ui->wLblTprz,0,0,3,10);
    layout->addWidget(ui->wLetTitle,3,0,2,30);
    layout->addWidget(ui->wDetDate,5,0,1,7);
    layout->addWidget(ui->wLblPlace,5,7,1,3);
    layout->addWidget(ui->wLetPlace,5,10,1,10);
    layout->addWidget(ui->wTetText,6,0,25,30);
    layout->addWidget(ui->wBtnAddImage,31,0,1,5);
    layout->addWidget(ui->wBtnPreviewImage,31,5,1,5);
    layout->addWidget(ui->wBtnDelete,31,12,1,2);
    layout->addWidget(ui->wLbl1,31,14,1,1);
    layout->addWidget(ui->wLetIndexDel,31,15,1,2);
    layout->addWidget(ui->wLbl2,31,17,1,1);
    layout->addWidget(ui->wLblImageAmount,31,19,1,8);
    layout->addWidget(ui->wBtnSubmit,33,0,1,5);
    layout->addWidget(ui->wBtnCancel,33,8,1,5);
    setLayout(layout);

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
    bool isSaved=false;
    QDir *saveDir = new QDir;
    QString documentsLocation=QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)
            .append("/tourManaer_dairy");
    //qDebug()<<documentsLocation;
    if(saveDir->exists(documentsLocation))
        isSaved=saveFile(documentsLocation);
    else
    {
         if(saveDir->mkdir(documentsLocation))
             isSaved=saveFile(documentsLocation);
         else
             QMessageBox::warning(this,tr("Can't save dairy!"),tr("Failed to create direction!-1"));
    }
    if(isSaved)
    {
        QMessageBox::information(this,"Save successful!","Your diary is saved successfully!");
        this->close();
    }
}
/*
 * 保存的文件格式为：时间地点/标题/标题.txt+图片文件夹，根目录Mydocument/tourManager_dairy
 * 如Mydocument/tourManager_dairy/20010101武汉/今天我真高兴/今天我真高兴.txt
 * Mydocument/tourManager_dairy/20010101武汉/今天我真高兴/Image/01.jpg
 */
bool AddFileDlg::saveFile(QString documentsLocation)
{
    //获取日期
    QDateTimeEdit*dateTimeEdit=ui->wDetDate;
    QString date = dateTimeEdit->date().toString(Qt::ISODate);

    //获取地点
    QString place=ui->wLetPlace->text();
    //qDebug()<<place;

    //判断文件夹是否存在
    QDir *saveDir = new QDir;
    QString saveLocation=documentsLocation.append(tr("/%1%2/").arg(date).arg(place));
    if(!saveDir->exists(saveLocation))
    {
        if(!saveDir->mkdir(saveLocation))
            QMessageBox::warning(this,tr("Can't save dairy!"),tr("Failed to create direction!-2"));
    }

    //获取日志文字内容及标题
    QString diaryText=ui->wTetText->toPlainText();
    QString diaryTitle=ui->wLetTitle->text();

    if(saveDir->exists(saveLocation.append(diaryTitle)))
    {
        qDebug()<<saveLocation;
        QMessageBox::warning(this,tr("Can't save dairy!"),tr("Diary is existed!Please change the title."));
        return false;
    }
    if(!saveDir->mkdir(saveLocation))
    {
        QMessageBox::warning(this,tr("Can't save dairy!"),tr("Failed to create direction!"));
        return false;
    }

    //保存
    QString textLocation=saveLocation;
    textLocation.append("/").append(diaryTitle.append(".txt"));
    //qDebug()<<diaryText;
    QFile*file1=new QFile(textLocation);
    if(!file1->open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QMessageBox::warning(this,tr("Can't save dairy!"),tr("Failed to create file!"));
        return false;
    }
    QTextStream txtOutput(file1);
    txtOutput<<diaryText<<endl;
    file1->close();

    //保存图片
    if(!saveDir->exists(saveLocation.append("/image/")))
    {
        //qDebug()<<saveLocation;
        if(!saveDir->mkdir(saveLocation))
            QMessageBox::warning(this,tr("Can't save dairy!"),tr("Failed to create iamge direction!"));
    }
    QString tempLocation;
    for(int i=0;i<imageFileNames.size();i++)
    {
        tempLocation=saveLocation;
        QImage*image=new QImage(imageFileNames[i]);
        QFile*file2=new QFile(tempLocation.append(tr("%1.jpg").arg(i+1)));
        //qDebug()<<tempLocation;
        if (!file2->open(QIODevice::ReadWrite))
        {
            break;
        }
        QByteArray ba;
        QBuffer buffer(&ba);
        buffer.open(QIODevice::WriteOnly);
        image->save(&buffer, "JPG");//把图片以流方式写入文件缓存流中
        file2->write(ba);
        file2->close();
        buffer.close();
    }
    return true;
}



