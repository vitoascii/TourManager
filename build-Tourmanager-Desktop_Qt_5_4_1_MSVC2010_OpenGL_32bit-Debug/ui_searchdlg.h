/********************************************************************************
** Form generated from reading UI file 'searchdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHDLG_H
#define UI_SEARCHDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_SearchDlg
{
public:
    QLabel *sLblLlcx;
    QLabel *sLblRstTitle;
    QPushButton *sBtnReturn;
    QLabel *sLblSearch;
    QLabel *sLblSearchWay;
    QComboBox *sCboxSearchWay;
    QLabel *sLblSearchDate;
    QDateEdit *sDetSearchDate;
    QLabel *sLblSearchPlace;
    QLineEdit *sLetSearchPlace;
    QLabel *sLblSearchTitle;
    QLineEdit *sLetSearchTitle;
    QToolButton *sTbtnSearch;
    QLabel *sLblResult1;
    QLabel *sLblResult2;
    QLabel *sLblResult3;
    QLabel *sLblResult4;
    QLabel *sLblResult5;
    QLabel *sLblResult6;
    QToolButton *sTbtnRstInxLast;
    QToolButton *sTbtnRstInxNext;
    QLabel *sLblRstIndex;

    void setupUi(QDialog *SearchDlg)
    {
        if (SearchDlg->objectName().isEmpty())
            SearchDlg->setObjectName(QStringLiteral("SearchDlg"));
        SearchDlg->resize(500, 350);
        SearchDlg->setMinimumSize(QSize(500, 350));
        sLblLlcx = new QLabel(SearchDlg);
        sLblLlcx->setObjectName(QStringLiteral("sLblLlcx"));
        sLblLlcx->setGeometry(QRect(0, 0, 171, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font.setPointSize(28);
        sLblLlcx->setFont(font);
        sLblRstTitle = new QLabel(SearchDlg);
        sLblRstTitle->setObjectName(QStringLiteral("sLblRstTitle"));
        sLblRstTitle->setGeometry(QRect(0, 50, 131, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        sLblRstTitle->setFont(font1);
        sBtnReturn = new QPushButton(SearchDlg);
        sBtnReturn->setObjectName(QStringLiteral("sBtnReturn"));
        sBtnReturn->setGeometry(QRect(350, 300, 75, 23));
        sLblSearch = new QLabel(SearchDlg);
        sLblSearch->setObjectName(QStringLiteral("sLblSearch"));
        sLblSearch->setGeometry(QRect(350, 70, 81, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font2.setPointSize(12);
        sLblSearch->setFont(font2);
        sLblSearchWay = new QLabel(SearchDlg);
        sLblSearchWay->setObjectName(QStringLiteral("sLblSearchWay"));
        sLblSearchWay->setGeometry(QRect(350, 90, 61, 21));
        sCboxSearchWay = new QComboBox(SearchDlg);
        sCboxSearchWay->setObjectName(QStringLiteral("sCboxSearchWay"));
        sCboxSearchWay->setGeometry(QRect(410, 90, 71, 22));
        sLblSearchDate = new QLabel(SearchDlg);
        sLblSearchDate->setObjectName(QStringLiteral("sLblSearchDate"));
        sLblSearchDate->setGeometry(QRect(350, 120, 41, 16));
        sDetSearchDate = new QDateEdit(SearchDlg);
        sDetSearchDate->setObjectName(QStringLiteral("sDetSearchDate"));
        sDetSearchDate->setGeometry(QRect(379, 120, 111, 22));
        sLblSearchPlace = new QLabel(SearchDlg);
        sLblSearchPlace->setObjectName(QStringLiteral("sLblSearchPlace"));
        sLblSearchPlace->setGeometry(QRect(350, 150, 31, 16));
        sLetSearchPlace = new QLineEdit(SearchDlg);
        sLetSearchPlace->setObjectName(QStringLiteral("sLetSearchPlace"));
        sLetSearchPlace->setGeometry(QRect(380, 150, 111, 20));
        sLblSearchTitle = new QLabel(SearchDlg);
        sLblSearchTitle->setObjectName(QStringLiteral("sLblSearchTitle"));
        sLblSearchTitle->setGeometry(QRect(350, 180, 31, 16));
        sLetSearchTitle = new QLineEdit(SearchDlg);
        sLetSearchTitle->setObjectName(QStringLiteral("sLetSearchTitle"));
        sLetSearchTitle->setGeometry(QRect(380, 180, 111, 20));
        sTbtnSearch = new QToolButton(SearchDlg);
        sTbtnSearch->setObjectName(QStringLiteral("sTbtnSearch"));
        sTbtnSearch->setGeometry(QRect(360, 210, 37, 18));
        sLblResult1 = new QLabel(SearchDlg);
        sLblResult1->setObjectName(QStringLiteral("sLblResult1"));
        sLblResult1->setGeometry(QRect(20, 90, 241, 16));
        sLblResult2 = new QLabel(SearchDlg);
        sLblResult2->setObjectName(QStringLiteral("sLblResult2"));
        sLblResult2->setGeometry(QRect(20, 120, 261, 16));
        sLblResult3 = new QLabel(SearchDlg);
        sLblResult3->setObjectName(QStringLiteral("sLblResult3"));
        sLblResult3->setGeometry(QRect(20, 141, 281, 21));
        sLblResult4 = new QLabel(SearchDlg);
        sLblResult4->setObjectName(QStringLiteral("sLblResult4"));
        sLblResult4->setGeometry(QRect(20, 180, 251, 16));
        sLblResult5 = new QLabel(SearchDlg);
        sLblResult5->setObjectName(QStringLiteral("sLblResult5"));
        sLblResult5->setGeometry(QRect(20, 210, 261, 16));
        sLblResult6 = new QLabel(SearchDlg);
        sLblResult6->setObjectName(QStringLiteral("sLblResult6"));
        sLblResult6->setGeometry(QRect(20, 240, 271, 16));
        sTbtnRstInxLast = new QToolButton(SearchDlg);
        sTbtnRstInxLast->setObjectName(QStringLiteral("sTbtnRstInxLast"));
        sTbtnRstInxLast->setGeometry(QRect(50, 270, 37, 18));
        sTbtnRstInxNext = new QToolButton(SearchDlg);
        sTbtnRstInxNext->setObjectName(QStringLiteral("sTbtnRstInxNext"));
        sTbtnRstInxNext->setGeometry(QRect(190, 270, 37, 18));
        sLblRstIndex = new QLabel(SearchDlg);
        sLblRstIndex->setObjectName(QStringLiteral("sLblRstIndex"));
        sLblRstIndex->setGeometry(QRect(110, 270, 54, 12));

        retranslateUi(SearchDlg);
        QObject::connect(sBtnReturn, SIGNAL(clicked()), SearchDlg, SLOT(close()));

        QMetaObject::connectSlotsByName(SearchDlg);
    } // setupUi

    void retranslateUi(QDialog *SearchDlg)
    {
        SearchDlg->setWindowTitle(QApplication::translate("SearchDlg", "Dialog", 0));
        sLblLlcx->setText(QApplication::translate("SearchDlg", "<html><head/><body><p><span style=\" color:#005500;\">\346\265\217\350\247\210\346\237\245\350\257\242</span></p></body></html>", 0));
        sLblRstTitle->setText(QApplication::translate("SearchDlg", "<html><head/><body><p><span style=\" font-size:14pt; color:#0055ff;\">\346\234\200\350\277\221\347\232\204\350\256\260\345\275\225\357\274\232</span></p></body></html>", 0));
        sBtnReturn->setText(QApplication::translate("SearchDlg", "\350\277\224\345\233\236\351\246\226\351\241\265", 0));
        sLblSearch->setText(QApplication::translate("SearchDlg", "<html><head/><body><p><span style=\" font-size:10pt;\">\346\237\245\346\211\276\346\227\245\345\277\227\357\274\232</span></p></body></html>", 0));
        sLblSearchWay->setText(QApplication::translate("SearchDlg", "\346\237\245\350\257\242\346\226\271\345\274\217\357\274\232", 0));
        sCboxSearchWay->clear();
        sCboxSearchWay->insertItems(0, QStringList()
         << QApplication::translate("SearchDlg", "\346\214\211\346\227\245\346\234\237", 0)
         << QApplication::translate("SearchDlg", "\346\214\211\345\234\260\347\202\271", 0)
         << QApplication::translate("SearchDlg", "\346\214\211\346\240\207\351\242\230", 0)
        );
        sLblSearchDate->setText(QApplication::translate("SearchDlg", "\346\227\245\346\234\237\357\274\232", 0));
        sLblSearchPlace->setText(QApplication::translate("SearchDlg", "\345\234\260\347\202\271\357\274\232", 0));
        sLblSearchTitle->setText(QApplication::translate("SearchDlg", "\346\240\207\351\242\230\357\274\232", 0));
        sTbtnSearch->setText(QApplication::translate("SearchDlg", "\346\237\245\346\211\276", 0));
        sLblResult1->setText(QString());
        sLblResult2->setText(QString());
        sLblResult3->setText(QString());
        sLblResult4->setText(QString());
        sLblResult5->setText(QString());
        sLblResult6->setText(QString());
        sTbtnRstInxLast->setText(QApplication::translate("SearchDlg", "...", 0));
        sTbtnRstInxNext->setText(QApplication::translate("SearchDlg", "...", 0));
        sLblRstIndex->setText(QApplication::translate("SearchDlg", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class SearchDlg: public Ui_SearchDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHDLG_H
