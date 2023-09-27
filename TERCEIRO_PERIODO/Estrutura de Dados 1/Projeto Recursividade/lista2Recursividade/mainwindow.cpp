#include "mainwindow.h"
#include "resolucao.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

resolucao Exercicios;

void MainWindow::on_pushButtonEx1Interativo_clicked()
{
    QString resultado="";
     int valorDeEntrada=0;
    valorDeEntrada = ui->lineEditEntradaEx1->text().toInt();
    resultado=Exercicios.exercicio1Interativo(valorDeEntrada);
    ui->textEditSaidaEx1->setText(resultado);
}
void MainWindow::on_pushButtonEx1Recursivo_clicked()
{
    int valor;
        QString res;
        valor=ui->lineEditEntradaEx1->text().toInt();
        if(valor>=1){
            res=QString::number(Exercicios.exercicio1Recursivo(valor, 0));
        }else{
            res="Valor inválido.";
        }
        ui->textEditSaidaEx1->setText(res);
}


void MainWindow::on_pushButtonEx2Interativo_clicked()
{
    QString resultado="";
    int valorDeEntrada=0;
    valorDeEntrada=ui->lineEditEntradaEx2->text().toInt();
    resultado=Exercicios.exercicio2Interativo(valorDeEntrada);
    ui->textEditSaidaEx2->setText(resultado);
}


void MainWindow::on_pushButtonEx2Recursivo_clicked()
{
    QString resultado="";
    int valorDeEntrada=0;
    valorDeEntrada=ui->lineEditEntradaEx2->text().toInt();
    resultado=Exercicios.exercicio2Recursivo(valorDeEntrada,"");
    ui->textEditSaidaEx2->setText(resultado);
}


void MainWindow::on_pushButtonEx3Interativo_clicked()
{
        QString res;
        res=QString::number(Exercicios.exercicio3Interativo());
        ui->textEditSaidaEx3->setText(res);
}


void MainWindow::on_pushButtonEx3Recursivo_clicked()
{
    QString res;
    int vetor[] = {5, 8, 29, 1, 69};
    res=QString::number(Exercicios.exercicio3Recursivo(vetor,4,vetor[0],0));
    ui->textEditSaidaEx3->setText(res);
}

void MainWindow::on_pushButtonEx4Interativo_clicked()
{
    int n = ui->lineEditEntradaEx4->text().toInt();
            QString saida = Exercicios.exercicio4Interativo(n, 0, 1, "");
            ui->textEditSaidaEx4->setText(saida);
}

void MainWindow::on_pushButtonEx4Recursivo_clicked()
{
    int n = ui->lineEditEntradaEx4->text().toInt();
            QString saida = Exercicios.exercicio4Recursivo(n, 0, 1, "");
            ui->textEditSaidaEx4->setText(saida);
}


void MainWindow::on_pushButtonEx5Interativo_clicked()
{
    QString resultado="";
    int valorDeEntradaX=0;
    int valorDeEntradaY=0;
    valorDeEntradaX=ui->lineEditEntradaXEx5->text().toInt();
    valorDeEntradaY=ui->lineEditEntradaYEx5->text().toInt();
    resultado=QString::number(Exercicios.exercicio5Interativo(valorDeEntradaX, valorDeEntradaY));
    ui->textEditSaidaEx5->setText(resultado);
}
void MainWindow::on_pushButtonEx5Recursivo_clicked()
{
    QString resultado="";
    int valorDeEntradaX=0;
    int valorDeEntradaY=0;
    valorDeEntradaX=ui->lineEditEntradaXEx5->text().toInt();
    valorDeEntradaY=ui->lineEditEntradaYEx5->text().toInt();
    resultado=QString::number(Exercicios.exercicio5Recurtsivo(valorDeEntradaX, valorDeEntradaY,0,1));
    ui->textEditSaidaEx5->setText(resultado);
}


void MainWindow::on_pushButtonEx6Interativo_clicked()
{
    QString resultado="";
    int valorDeEntradaN1=0;
    int valorDeEntradaN2=0;
    valorDeEntradaN1=ui->lineEditEntradaN1Ex6->text().toInt();
    valorDeEntradaN2=ui->lineEditEntradaN2Ex6->text().toInt();
    resultado=QString(Exercicios.exercicio6Interativo(valorDeEntradaN1, valorDeEntradaN2, 0, ""));
    ui->textEditSaidaEx6->setText(resultado);
}


void MainWindow::on_pushButtonEx6Recursivo_clicked()
{
    QString resultado="";
    int valorDeEntradaN1=0;
    int valorDeEntradaN2=0;
    valorDeEntradaN1=ui->lineEditEntradaN1Ex6->text().toInt();
    valorDeEntradaN2=ui->lineEditEntradaN2Ex6->text().toInt();
    resultado=QString(Exercicios.exercicio6Recursivo(valorDeEntradaN1, valorDeEntradaN2, 0,1, ""));
    ui->textEditSaidaEx6->setText(resultado);
}

