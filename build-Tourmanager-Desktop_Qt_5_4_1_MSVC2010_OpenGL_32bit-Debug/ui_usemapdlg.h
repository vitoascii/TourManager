/********************************************************************************
** Form generated from reading UI file 'usemapdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USEMAPDLG_H
#define UI_USEMAPDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_UseMapDlg
{
public:

    void setupUi(QDialog *UseMapDlg)
    {
        if (UseMapDlg->objectName().isEmpty())
            UseMapDlg->setObjectName(QStringLiteral("UseMapDlg"));
        UseMapDlg->resize(400, 300);

        retranslateUi(UseMapDlg);

        QMetaObject::connectSlotsByName(UseMapDlg);
    } // setupUi

    void retranslateUi(QDialog *UseMapDlg)
    {
        UseMapDlg->setWindowTitle(QApplication::translate("UseMapDlg", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class UseMapDlg: public Ui_UseMapDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USEMAPDLG_H
