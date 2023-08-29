/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_3;
    QTextEdit *textEdit_dadosGerados;
    QLabel *label_4;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_quantidadeDeElementos;
    QPushButton *pushButton_gerar;
    QPushButton *pushButton_VERIFICAR;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *lineEdit_verificacao;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QTextEdit *textEdit_resultadoVerificado;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(750, 438);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 10, 581, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 100, 441, 21));
        textEdit_dadosGerados = new QTextEdit(centralwidget);
        textEdit_dadosGerados->setObjectName("textEdit_dadosGerados");
        textEdit_dadosGerados->setGeometry(QRect(10, 130, 731, 61));
        textEdit_dadosGerados->setReadOnly(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 330, 261, 16));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 60, 445, 28));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        lineEdit_quantidadeDeElementos = new QLineEdit(layoutWidget);
        lineEdit_quantidadeDeElementos->setObjectName("lineEdit_quantidadeDeElementos");

        horizontalLayout->addWidget(lineEdit_quantidadeDeElementos);


        horizontalLayout_2->addLayout(horizontalLayout);

        pushButton_gerar = new QPushButton(layoutWidget);
        pushButton_gerar->setObjectName("pushButton_gerar");

        horizontalLayout_2->addWidget(pushButton_gerar);

        pushButton_VERIFICAR = new QPushButton(centralwidget);
        pushButton_VERIFICAR->setObjectName("pushButton_VERIFICAR");
        pushButton_VERIFICAR->setGeometry(QRect(390, 210, 80, 24));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 210, 303, 26));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        horizontalLayout_3->addWidget(label_5);

        lineEdit_verificacao = new QLineEdit(widget);
        lineEdit_verificacao->setObjectName("lineEdit_verificacao");

        horizontalLayout_3->addWidget(lineEdit_verificacao);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(10, 240, 352, 72));
        horizontalLayout_4 = new QHBoxLayout(widget1);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget1);
        label_6->setObjectName("label_6");

        horizontalLayout_4->addWidget(label_6);

        textEdit_resultadoVerificado = new QTextEdit(widget1);
        textEdit_resultadoVerificado->setObjectName("textEdit_resultadoVerificado");

        horizontalLayout_4->addWidget(textEdit_resultadoVerificado);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 750, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:22pt; font-weight:700; font-style:italic;\">ESTRUTURA DE DADOS II - ATIVIDADE 01</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">DADOS GERADOS ALEATORIAMENTE INCLUIDOS NO VETOR:</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "PEDRO MACEDO PARONETTO FARIA VIANA", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">QUANTIDADE DE ELEMENTOS:</span></p></body></html>", nullptr));
        pushButton_gerar->setText(QCoreApplication::translate("MainWindow", "GERAR", nullptr));
        pushButton_VERIFICAR->setText(QCoreApplication::translate("MainWindow", "VERIFICAR", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">VALOR A SER VERIFICADO:</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">RESULTADO:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
