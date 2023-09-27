/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *numConvert;
    QLabel *label_2;
    QRadioButton *baseBin;
    QRadioButton *baseHexa;
    QRadioButton *baseOctal;
    QTextBrowser *conversao;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menuConversor_de_bases;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(758, 402);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 20, 521, 41));
        numConvert = new QLineEdit(centralwidget);
        numConvert->setObjectName(QString::fromUtf8("numConvert"));
        numConvert->setGeometry(QRect(328, 111, 108, 24));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(271, 111, 51, 18));
        baseBin = new QRadioButton(centralwidget);
        baseBin->setObjectName(QString::fromUtf8("baseBin"));
        baseBin->setGeometry(QRect(319, 160, 62, 22));
        baseHexa = new QRadioButton(centralwidget);
        baseHexa->setObjectName(QString::fromUtf8("baseHexa"));
        baseHexa->setGeometry(QRect(387, 160, 94, 22));
        baseOctal = new QRadioButton(centralwidget);
        baseOctal->setObjectName(QString::fromUtf8("baseOctal"));
        baseOctal->setGeometry(QRect(260, 160, 53, 22));
        conversao = new QTextBrowser(centralwidget);
        conversao->setObjectName(QString::fromUtf8("conversao"));
        conversao->setGeometry(QRect(250, 220, 251, 111));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(330, 190, 80, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 758, 21));
        menuConversor_de_bases = new QMenu(menubar);
        menuConversor_de_bases->setObjectName(QString::fromUtf8("menuConversor_de_bases"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuConversor_de_bases->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700;\">CONVERSOR DE BASES DECIMAIS</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">N\303\272mero:</span></p></body></html>", nullptr));
        baseBin->setText(QCoreApplication::translate("MainWindow", "Bin\303\241rio", nullptr));
        baseHexa->setText(QCoreApplication::translate("MainWindow", "Hexadecimal", nullptr));
        baseOctal->setText(QCoreApplication::translate("MainWindow", "Octal", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Executar", nullptr));
        menuConversor_de_bases->setTitle(QCoreApplication::translate("MainWindow", "Conversor de bases", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
