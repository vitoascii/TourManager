#include "searchdlg.h"
#include "ui_searchdlg.h"
#include <QDebug>
#include <QStandardPaths>
#include <QFileDialog>

SearchDlg::SearchDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchDlg)
{
    ui->setupUi(this);
    this->setWindowTitle("查询");
    QString documentsLocation=QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)
            .append("/tourManaer_dairy");
    QDir*dir1=new QDir(documentsLocation);
    QStringList filter1;
    QList<QFileInfo> *fileInfo1=new QList<QFileInfo>(dir1->entryInfoList(filter1));
    for(int i=0;i<fileInfo1->size();i++)
    {
        //qDebug()<<fileInfo1->at(i).filePath();
        //qDebug()<<fileInfo1->at(i).fileName();
        QDir*dir2=new QDir(fileInfo1->at(i).filePath());
        QStringList filter2;
        QList<QFileInfo> *fileInfo2=new QList<QFileInfo>(dir2->entryInfoList(filter2));
        for(int j=0;j<fileInfo2->size();j++)
        {
            //qDebug()<<fileInfo2->at(j).filePath();
            //qDebug()<<fileInfo2->at(j).fileName();
        }
    }
}

SearchDlg::~SearchDlg()
{
    delete ui;
}

void SearchDlg::on_sTbtnSearch_clicked()
{
    QStringList temp;
    switch(ui->sCboxSearchWay->currentIndex())
    {
    case 0:temp=searchByDate(ui->sDetSearchDate->date());
           qDebug()<<temp;
    case 1:
    case 2:
    default:break;


    }


}

QStringList SearchDlg::searchByDate(QDate date)
{
    qDebug()<<date.toString(Qt::ISODate);
    QStringList temp;
    temp.append("1");
    temp.append("2");
    return temp;


}
QStringList SearchDlg::searchByPlace(QString place)
{
    QStringList temp;
    temp.append("1");
    temp.append("2");
    return temp;
}
QStringList SearchDlg::searchByTitle(QString title)
{
    QStringList temp;
    temp.append("1");
    temp.append("2");
    return temp;
}
