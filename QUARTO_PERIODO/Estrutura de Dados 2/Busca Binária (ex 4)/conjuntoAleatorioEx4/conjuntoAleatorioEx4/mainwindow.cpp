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

//            if(ui->lineEdit_quantidadeDeElementos->text().isEmpty()) throw QString ("Digite um tamanho para o vetor");
//            vetor = new PMPFV::conjuntoAleatorio (ui->lineEdit_quantidadeDeElementos->text().toInt());
            vetor->selectionSort();
            ui->textEdit_dadosGerados_Ordenado->setText(vetor->getSelectionSort());


        } catch (QString &erro) {
            QMessageBox::critical(this, "ERRO", erro);
        }
}

void MainWindow::on_pushButtonBuscar_clicked()
{
    try {
           if(ui->lineEdit_quantidadeDeElementos->text().isEmpty()) throw QString ("Digite um valor para a busca");
           QString posicao = QString::number(vetor->verificar(ui->lineEditValor->text().toInt()));
           ui->lineEdit_2->setText("O número "+ ui->lineEditValor->text() + " existe na posição " + posicao );
       } catch (QString &erro) {
           QMessageBox::critical(this, "ERRO", erro);
       }
}


void MainWindow::on_pushButtonBuscar_BuscaOrdenada_clicked()
{
    try {
       if(ui->lineEdit_quantidadeDeElementos->text().isEmpty()) throw QString ("Digite um valor para a busca");
       QString posicao = QString::number(vetor->buscaBinaria(ui->lineEditValorBuscaBinaria->text().toInt()));
       int aux = vetor->buscaBinaria(ui->lineEditValorBuscaBinaria->text().toInt());
       if(aux == -1 ){
           throw QString ("Número não encontrado");
       }
       else{
           ui->lineEditresultadoBuscaBinaria->setText("O número "+ ui->lineEditValorBuscaBinaria->text() + " existe na posição " + QString::number(aux));

       }
    } catch (QString &erro) {
        QMessageBox::critical(this, "ERRO", erro);
    }
}

