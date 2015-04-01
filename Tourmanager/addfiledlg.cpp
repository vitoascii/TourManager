#include "addfiledlg.h"
#include "ui_addfiledlg.h"

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
