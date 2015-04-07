#include "searchdlg.h"
#include "ui_searchdlg.h"
#include <QDebug>
#include <QStandardPaths>
#include <QFileDialog>

QLabel*lblRes[6];
SearchDlg::SearchDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchDlg)
{
    ui->setupUi(this);
    this->setWindowTitle("查询");
    lblRes[0]=ui->sLblResult1;
    lblRes[1]=ui->sLblResult2;
    lblRes[2]=ui->sLblResult3;
    lblRes[3]=ui->sLblResult4;
    lblRes[4]=ui->sLblResult5;
    lblRes[5]=ui->sLblResult6;

    //先显示最近添加的日志
    QString documentsLocation=QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)
            .append("/tourManager_dairy");
    QStringList fileList;
    QStringList diaryList;
    QDir*dir1=new QDir(documentsLocation);
    QStringList filter1;
    QList<QFileInfo> *fileInfo1=new QList<QFileInfo>(dir1->entryInfoList(filter1));

    for(int i=fileInfo1->size()-1,count=0;i>=0;i--)
    {
        if(fileInfo1->at(i).filePath().endsWith("."))
            continue;
        QDir*dir2=new QDir(fileInfo1->at(i).filePath());
        QStringList filter2;
        QList<QFileInfo> *fileInfo2=new QList<QFileInfo>(dir2->entryInfoList(filter2));
        for(int j=fileInfo2->size()-1;j>=0;j--)
        {
            if(fileInfo2->at(j).filePath().endsWith("."))
                continue;
            fileList.append(fileInfo2->at(j).filePath());
            diaryList.append(fileList.at(count).mid(documentsLocation.size()+1));
            count++;
        }
        if(count>6)
            break;
    }

    for(int i=0;(i<diaryList.size())&&(i<6);i++)
    {
        lblRes[i]->setText(diaryList.at(i));
    }
}

SearchDlg::~SearchDlg()
{
    delete ui;
}

void SearchDlg::on_sTbtnSearch_clicked()
{
    //QLabel*lblRes[6];
    lblRes[0]=ui->sLblResult1;
    lblRes[1]=ui->sLblResult2;
    lblRes[2]=ui->sLblResult3;
    lblRes[3]=ui->sLblResult4;
    lblRes[4]=ui->sLblResult5;
    lblRes[5]=ui->sLblResult6;
    QStringList fileList;
    switch(ui->sCboxSearchWay->currentIndex())
    {
    case 0:fileList=search(ui->sDetSearchDate->date().toString(Qt::ISODate));break;
    case 1:fileList=search(ui->sLetSearchPlace->text());break;
    case 2:fileList=search(ui->sLetSearchTitle->text());break;
    default:break;
    }
    qDebug()<<fileList;
    for(int i=0;i<6;i++)
    {
        i<fileList.size()?lblRes[i]->setText(fileList.at(i)):lblRes[i]->clear();
    }
}

QStringList SearchDlg::search(QString searchKey)
{
    QString documentsLocation=QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)
            .append("/tourManager_dairy");
    QStringList fileList;
    QStringList diaryList;
    QDir*dir1=new QDir(documentsLocation);
    QStringList filter1;
    QList<QFileInfo> *fileInfo1=new QList<QFileInfo>(dir1->entryInfoList(filter1));

    for(int i=fileInfo1->size()-1,count=0;i>=0;i--)
    {
        if(fileInfo1->at(i).filePath().endsWith("."))
            continue;
        QDir*dir2=new QDir(fileInfo1->at(i).filePath());
        QStringList filter2;
        QList<QFileInfo> *fileInfo2=new QList<QFileInfo>(dir2->entryInfoList(filter2));
        for(int j=fileInfo2->size()-1;j>=0;j--)
        {
            if(fileInfo2->at(j).filePath().endsWith("."))
                continue;
            fileList.append(fileInfo2->at(j).filePath());
            if(fileList.last().indexOf(searchKey)!=-1)
            {
                diaryList.append(fileList.last().mid(documentsLocation.size()+1));
                count++;
            }
        }
    }
    return diaryList;
}

