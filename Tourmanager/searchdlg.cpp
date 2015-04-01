#include "searchdlg.h"
#include "ui_searchdlg.h"

SearchDlg::SearchDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchDlg)
{
    ui->setupUi(this);
}

SearchDlg::~SearchDlg()
{
    delete ui;
}
