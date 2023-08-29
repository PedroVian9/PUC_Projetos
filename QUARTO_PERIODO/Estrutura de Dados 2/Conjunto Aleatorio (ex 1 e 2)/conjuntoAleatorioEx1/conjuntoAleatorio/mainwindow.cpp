#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QRegularExpressionValidator *validatorNumeros = new QRegularExpressionValidator(this);
    validatorNumeros->setRegularExpression(QRegularExpression("^\\d+$"));
    ui->lineEdit_quantidadeDeElementos->setValidator(validatorNumeros);
    ui->textEdit_dadosGerados->isReadOnly();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_gerar_clicked()
{
    try {
            if(ui->lineEdit_quantidadeDeElementos->text().isEmpty()) throw QString ("Digite um tamanho para o vetor");
            vetor = new PMPFV::conjuntoAleatorio (ui->lineEdit_quantidadeDeElementos->text().toInt());
            ui->textEdit_dadosGerados->setText(vetor->getConjunto());
        } catch (QString &erro) {
            QMessageBox::critical(this, "ERRO", erro);
        }
}

