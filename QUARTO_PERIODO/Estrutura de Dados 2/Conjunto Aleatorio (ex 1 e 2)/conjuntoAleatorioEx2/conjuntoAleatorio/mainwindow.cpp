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
    ui->lineEdit_verificacao->setValidator(validatorNumeros);
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


void MainWindow::on_pushButton_VERIFICAR_clicked()
{
    try {
           if(ui->lineEdit_quantidadeDeElementos->text().isEmpty()) throw QString ("Digite um valor para a busca");
           QString posicao = QString::number(vetor->verificar(ui->lineEdit_verificacao->text().toInt()));
           ui->textEdit_resultadoVerificado->setText("O número "+ ui->lineEdit_verificacao->text() + " existe na posição " + posicao );
       } catch (QString &erro) {
           QMessageBox::critical(this, "ERRO", erro);
       }
}

