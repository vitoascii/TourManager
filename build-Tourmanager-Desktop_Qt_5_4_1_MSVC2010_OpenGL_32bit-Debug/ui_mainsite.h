/********************************************************************************
** Form generated from reading UI file 'mainsite.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINSITE_H
#define UI_MAINSITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MainSite
{
public:
    QPushButton *mBtnAddFile;
    QPushButton *mBtnSearch;
    QPushButton *mBtnUseMap;

    void setupUi(QDialog *MainSite)
    {
        if (MainSite->objectName().isEmpty())
            MainSite->setObjectName(QStringLiteral("MainSite"));
        MainSite->resize(400, 300);
        mBtnAddFile = new QPushButton(MainSite);
        mBtnAddFile->setObjectName(QStringLiteral("mBtnAddFile"));
        mBtnAddFile->setGeometry(QRect(20, 100, 75, 23));
        mBtnSearch = new QPushButton(MainSite);
        mBtnSearch->setObjectName(QStringLiteral("mBtnSearch"));
        mBtnSearch->setGeometry(QRect(120, 140, 75, 23));
        mBtnUseMap = new QPushButton(MainSite);
        mBtnUseMap->setObjectName(QStringLiteral("mBtnUseMap"));
        mBtnUseMap->setGeometry(QRect(220, 100, 75, 23));

        retranslateUi(MainSite);

        QMetaObject::connectSlotsByName(MainSite);
    } // setupUi

    void retranslateUi(QDialog *MainSite)
    {
        MainSite->setWindowTitle(QApplication::translate("MainSite", "MainSite", 0));
        mBtnAddFile->setText(QApplication::translate("MainSite", "add", 0));
        mBtnSearch->setText(QApplication::translate("MainSite", "search", 0));
        mBtnUseMap->setText(QApplication::translate("MainSite", "map", 0));
    } // retranslateUi

};

namespace Ui {
    class MainSite: public Ui_MainSite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSITE_H
