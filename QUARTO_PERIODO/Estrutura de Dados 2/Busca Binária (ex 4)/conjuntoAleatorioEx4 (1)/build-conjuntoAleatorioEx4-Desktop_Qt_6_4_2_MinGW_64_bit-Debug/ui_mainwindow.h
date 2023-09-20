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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit_dadosGerados;
    QLabel *label_4;
    QLabel *label_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_quantidadeDeElementos;
    QPushButton *pushButton_gerar;
    QLabel *label_8;
    QLabel *label;
    QTextEdit *textEdit_dadosGerados_Ordenado;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *lineEditValor;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLineEdit *lineEdit_2;
    QPushButton *pushButtonBuscar;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QLineEdit *lineEditValorBuscaBinaria;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_11;
    QLineEdit *lineEditresultadoBuscaBinaria;
    QPushButton *pushButtonBuscar_BuscaOrdenada;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(756, 410);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        textEdit_dadosGerados = new QTextEdit(centralwidget);
        textEdit_dadosGerados->setObjectName("textEdit_dadosGerados");
        textEdit_dadosGerados->setGeometry(QRect(10, 110, 731, 21));
        textEdit_dadosGerados->setReadOnly(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 140, 251, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 80, 471, 21));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 40, 445, 28));
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

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 350, 261, 16));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 0, 571, 31));
        textEdit_dadosGerados_Ordenado = new QTextEdit(centralwidget);
        textEdit_dadosGerados_Ordenado->setObjectName("textEdit_dadosGerados_Ordenado");
        textEdit_dadosGerados_Ordenado->setGeometry(QRect(10, 160, 731, 21));
        textEdit_dadosGerados_Ordenado->setReadOnly(true);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 200, 709, 110));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");

        horizontalLayout_3->addWidget(label_6);

        lineEditValor = new QLineEdit(widget);
        lineEditValor->setObjectName("lineEditValor");

        horizontalLayout_3->addWidget(lineEditValor);


        horizontalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");

        horizontalLayout_4->addWidget(label_7);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_4->addWidget(lineEdit_2);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        pushButtonBuscar = new QPushButton(widget);
        pushButtonBuscar->setObjectName("pushButtonBuscar");

        horizontalLayout_5->addWidget(pushButtonBuscar);


        verticalLayout->addLayout(horizontalLayout_5);

        label_9 = new QLabel(widget);
        label_9->setObjectName("label_9");

        verticalLayout->addWidget(label_9);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_10 = new QLabel(widget);
        label_10->setObjectName("label_10");

        horizontalLayout_7->addWidget(label_10);

        lineEditValorBuscaBinaria = new QLineEdit(widget);
        lineEditValorBuscaBinaria->setObjectName("lineEditValorBuscaBinaria");

        horizontalLayout_7->addWidget(lineEditValorBuscaBinaria);


        horizontalLayout_6->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_11 = new QLabel(widget);
        label_11->setObjectName("label_11");

        horizontalLayout_8->addWidget(label_11);

        lineEditresultadoBuscaBinaria = new QLineEdit(widget);
        lineEditresultadoBuscaBinaria->setObjectName("lineEditresultadoBuscaBinaria");

        horizontalLayout_8->addWidget(lineEditresultadoBuscaBinaria);


        horizontalLayout_6->addLayout(horizontalLayout_8);

        pushButtonBuscar_BuscaOrdenada = new QPushButton(widget);
        pushButtonBuscar_BuscaOrdenada->setObjectName("pushButtonBuscar_BuscaOrdenada");

        horizontalLayout_6->addWidget(pushButtonBuscar_BuscaOrdenada);


        verticalLayout->addLayout(horizontalLayout_6);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 756, 20));
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
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">DADOS DO VETOR ORDENADO:</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">DADOS GERADOS ALEATORIAMENTE INCLUIDOS NO VETOR:</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">QUANTIDADE DE ELEMENTOS:</span></p></body></html>", nullptr));
        pushButton_gerar->setText(QCoreApplication::translate("MainWindow", "GERAR", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>PEDRO MACEDO PARONETTO FARIA VIANA</p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:22pt; font-weight:700;\">ESTRUTURA DE DADOS II - ATIVIDADE 03</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">BUSCA SEQUENCIAL MELHORADA EM UM VETOR GERADO ALEATORIAMENTE - ORDENADO</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">VALOR:</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">RESULTADO:</span></p></body></html>", nullptr));
        pushButtonBuscar->setText(QCoreApplication::translate("MainWindow", "BUSCAR", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">BUSCA BIN\303\201RIA EM UM VETOR GERADO ALEATORIAMENTE - ORDENADO</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">VALOR:</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">RESULTADO:</span></p></body></html>", nullptr));
        pushButtonBuscar_BuscaOrdenada->setText(QCoreApplication::translate("MainWindow", "BUSCAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
