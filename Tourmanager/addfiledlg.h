#ifndef ADDFILEDLG_H
#define ADDFILEDLG_H

#include <QDialog>

namespace Ui {
class AddFileDlg;
}

class AddFileDlg : public QDialog
{
    Q_OBJECT

public:
    explicit AddFileDlg(QWidget *parent = 0);
    ~AddFileDlg();

private:
    Ui::AddFileDlg *ui;
};

#endif // ADDFILEDLG_H
