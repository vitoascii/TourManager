#ifndef SEARCHDLG_H
#define SEARCHDLG_H

#include <QDialog>

namespace Ui {
class SearchDlg;
}

class SearchDlg : public QDialog
{
    Q_OBJECT

public:
    explicit SearchDlg(QWidget *parent = 0);
    ~SearchDlg();

private:
    Ui::SearchDlg *ui;
};

#endif // SEARCHDLG_H
