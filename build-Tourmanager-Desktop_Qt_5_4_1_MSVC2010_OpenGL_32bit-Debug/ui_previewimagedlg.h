/********************************************************************************
** Form generated from reading UI file 'previewimagedlg.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREVIEWIMAGEDLG_H
#define UI_PREVIEWIMAGEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_PreviewImageDlg
{
public:
    QLabel *wpLblImage;
    QLabel *wpLblIndex;
    QToolButton *wpTbtnLastImage;
    QToolButton *wpTbtnNextImage;

    void setupUi(QDialog *PreviewImageDlg)
    {
        if (PreviewImageDlg->objectName().isEmpty())
            PreviewImageDlg->setObjectName(QStringLiteral("PreviewImageDlg"));
        PreviewImageDlg->resize(750, 640);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PreviewImageDlg->sizePolicy().hasHeightForWidth());
        PreviewImageDlg->setSizePolicy(sizePolicy);
        PreviewImageDlg->setMinimumSize(QSize(750, 640));
        wpLblImage = new QLabel(PreviewImageDlg);
        wpLblImage->setObjectName(QStringLiteral("wpLblImage"));
        wpLblImage->setGeometry(QRect(10, 10, 800, 550));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(wpLblImage->sizePolicy().hasHeightForWidth());
        wpLblImage->setSizePolicy(sizePolicy1);
        wpLblImage->setMinimumSize(QSize(800, 550));
        wpLblIndex = new QLabel(PreviewImageDlg);
        wpLblIndex->setObjectName(QStringLiteral("wpLblIndex"));
        wpLblIndex->setGeometry(QRect(320, 490, 54, 21));
        wpTbtnLastImage = new QToolButton(PreviewImageDlg);
        wpTbtnLastImage->setObjectName(QStringLiteral("wpTbtnLastImage"));
        wpTbtnLastImage->setGeometry(QRect(230, 490, 37, 18));
        wpTbtnNextImage = new QToolButton(PreviewImageDlg);
        wpTbtnNextImage->setObjectName(QStringLiteral("wpTbtnNextImage"));
        wpTbtnNextImage->setGeometry(QRect(410, 490, 37, 18));

        retranslateUi(PreviewImageDlg);

        QMetaObject::connectSlotsByName(PreviewImageDlg);
    } // setupUi

    void retranslateUi(QDialog *PreviewImageDlg)
    {
        PreviewImageDlg->setWindowTitle(QApplication::translate("PreviewImageDlg", "Dialog", 0));
        wpLblImage->setText(QString());
        wpLblIndex->setText(QString());
        wpTbtnLastImage->setText(QApplication::translate("PreviewImageDlg", "\342\227\200", 0));
        wpTbtnNextImage->setText(QApplication::translate("PreviewImageDlg", "\342\226\266", 0));
    } // retranslateUi

};

namespace Ui {
    class PreviewImageDlg: public Ui_PreviewImageDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREVIEWIMAGEDLG_H
