#ifndef MAINSITE_H
#define MAINSITE_H

#include <QDialog>

namespace Ui {
class MainSite;
}

class MainSite : public QDialog
{
    Q_OBJECT

public:
    explicit MainSite(QWidget *parent = 0);
    ~MainSite();

private slots:
    void on_mBtnAddFile_clicked();

    void on_mBtnSearch_clicked();

    void on_mBtnUseMap_clicked();

private:
    Ui::MainSite *ui;
};

#endif // MAINSITE_H
