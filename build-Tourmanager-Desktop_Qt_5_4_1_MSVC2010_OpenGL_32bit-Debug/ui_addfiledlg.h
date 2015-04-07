/********************************************************************************
** Form generated from reading UI file 'addfiledlg.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFILEDLG_H
#define UI_ADDFILEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AddFileDlg
{
public:
    QLabel *wLblTprz;
    QLineEdit *wLetTitle;
    QTextEdit *wTetText;
    QPushButton *wBtnSubmit;
    QPushButton *wBtnCancel;
    QDateEdit *wDetDate;
    QLineEdit *wLetPlace;
    QLabel *wLblPlace;
    QPushButton *wBtnAddImage;
    QPushButton *wBtnPreviewImage;
    QLabel *wLblImageAmount;
    QPushButton *wBtnDelete;
    QLabel *wLbl1;
    QLineEdit *wLetIndexDel;
    QLabel *wLbl2;

    void setupUi(QDialog *AddFileDlg)
    {
        if (AddFileDlg->objectName().isEmpty())
            AddFileDlg->setObjectName(QStringLiteral("AddFileDlg"));
        AddFileDlg->resize(750, 640);
        AddFileDlg->setMinimumSize(QSize(750, 640));
        wLblTprz = new QLabel(AddFileDlg);
        wLblTprz->setObjectName(QStringLiteral("wLblTprz"));
        wLblTprz->setGeometry(QRect(3, 2, 251, 41));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(wLblTprz->sizePolicy().hasHeightForWidth());
        wLblTprz->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        wLblTprz->setFont(font);
        wLetTitle = new QLineEdit(AddFileDlg);
        wLetTitle->setObjectName(QStringLiteral("wLetTitle"));
        wLetTitle->setGeometry(QRect(10, 50, 481, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font1.setPointSize(12);
        wLetTitle->setFont(font1);
        wTetText = new QTextEdit(AddFileDlg);
        wTetText->setObjectName(QStringLiteral("wTetText"));
        wTetText->setGeometry(QRect(10, 120, 481, 321));
        wBtnSubmit = new QPushButton(AddFileDlg);
        wBtnSubmit->setObjectName(QStringLiteral("wBtnSubmit"));
        wBtnSubmit->setGeometry(QRect(10, 470, 75, 23));
        wBtnCancel = new QPushButton(AddFileDlg);
        wBtnCancel->setObjectName(QStringLiteral("wBtnCancel"));
        wBtnCancel->setGeometry(QRect(100, 470, 75, 23));
        wDetDate = new QDateEdit(AddFileDlg);
        wDetDate->setObjectName(QStringLiteral("wDetDate"));
        wDetDate->setGeometry(QRect(10, 90, 81, 22));
        wLetPlace = new QLineEdit(AddFileDlg);
        wLetPlace->setObjectName(QStringLiteral("wLetPlace"));
        wLetPlace->setGeometry(QRect(140, 90, 113, 20));
        wLetPlace->setInputMethodHints(Qt::ImhNone);
        wLblPlace = new QLabel(AddFileDlg);
        wLblPlace->setObjectName(QStringLiteral("wLblPlace"));
        wLblPlace->setGeometry(QRect(100, 90, 54, 20));
        wBtnAddImage = new QPushButton(AddFileDlg);
        wBtnAddImage->setObjectName(QStringLiteral("wBtnAddImage"));
        wBtnAddImage->setGeometry(QRect(10, 440, 61, 23));
        wBtnPreviewImage = new QPushButton(AddFileDlg);
        wBtnPreviewImage->setObjectName(QStringLiteral("wBtnPreviewImage"));
        wBtnPreviewImage->setGeometry(QRect(70, 440, 75, 23));
        wLblImageAmount = new QLabel(AddFileDlg);
        wLblImageAmount->setObjectName(QStringLiteral("wLblImageAmount"));
        wLblImageAmount->setGeometry(QRect(270, 440, 121, 20));
        wBtnDelete = new QPushButton(AddFileDlg);
        wBtnDelete->setObjectName(QStringLiteral("wBtnDelete"));
        wBtnDelete->setGeometry(QRect(150, 401, 30, 23));
        wBtnDelete->setMinimumSize(QSize(0, 0));
        wLbl1 = new QLabel(AddFileDlg);
        wLbl1->setObjectName(QStringLiteral("wLbl1"));
        wLbl1->setGeometry(QRect(190, 442, 16, 20));
        wLetIndexDel = new QLineEdit(AddFileDlg);
        wLetIndexDel->setObjectName(QStringLiteral("wLetIndexDel"));
        wLetIndexDel->setGeometry(QRect(210, 440, 31, 20));
        wLbl2 = new QLabel(AddFileDlg);
        wLbl2->setObjectName(QStringLiteral("wLbl2"));
        wLbl2->setGeometry(QRect(246, 441, 16, 20));

        retranslateUi(AddFileDlg);
        QObject::connect(wBtnCancel, SIGNAL(clicked()), AddFileDlg, SLOT(close()));

        QMetaObject::connectSlotsByName(AddFileDlg);
    } // setupUi

    void retranslateUi(QDialog *AddFileDlg)
    {
        AddFileDlg->setWindowTitle(QApplication::translate("AddFileDlg", "Dialog", 0));
        wLblTprz->setText(QApplication::translate("AddFileDlg", "<html><head/><body><p><span style=\" font-size:28pt; color:#00aa00;\">\345\233\276\347\211\207\346\227\245\345\277\227</span></p></body></html>", 0));
        wBtnSubmit->setText(QApplication::translate("AddFileDlg", "\347\241\256\345\256\232", 0));
        wBtnCancel->setText(QApplication::translate("AddFileDlg", "\345\217\226\346\266\210", 0));
#ifndef QT_NO_TOOLTIP
        wLetPlace->setToolTip(QApplication::translate("AddFileDlg", "<html><head/><body><p>\345\234\260\347\202\271</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        wLetPlace->setText(QString());
        wLblPlace->setText(QApplication::translate("AddFileDlg", "\345\234\260\347\202\271\357\274\232", 0));
        wBtnAddImage->setText(QApplication::translate("AddFileDlg", "\346\267\273\345\212\240\345\233\276\347\211\207", 0));
        wBtnPreviewImage->setText(QApplication::translate("AddFileDlg", "\345\233\276\347\211\207\351\242\204\350\247\210", 0));
        wLblImageAmount->setText(QString());
        wBtnDelete->setText(QApplication::translate("AddFileDlg", "\345\210\240\351\231\244", 0));
        wLbl1->setText(QApplication::translate("AddFileDlg", "\347\254\254", 0));
        wLbl2->setText(QApplication::translate("AddFileDlg", "\345\274\240", 0));
    } // retranslateUi

};

namespace Ui {
    class AddFileDlg: public Ui_AddFileDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFILEDLG_H
