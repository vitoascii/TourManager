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
    QStringList imageFileNames;

private slots:
    void on_wBtnAddImage_clicked();

    void on_wBtnPreviewImage_clicked();

    void on_pushButton_clicked();

private:
    Ui::AddFileDlg *ui;
};

#endif // ADDFILEDLG_H
