#ifndef RESOLUCAO_H
#define RESOLUCAO_H
#include <QString>
#include <cmath>
#include <iostream>

class resolucao
{
public:
    resolucao();
    QString exercicio1Interativo(int n);
    int exercicio1Recursivo(int n, int somaN);

    QString exercicio2Interativo(int n);
    QString exercicio2Recursivo(int n, QString saida);

    int exercicio3Interativo();
    int exercicio3Recursivo(int vetor[], int tamanho, int valor,int contador);

    QString exercicio4Interativo(int n, int valor, int tamanho, QString saida);
    QString exercicio4Recursivo(int n, int valor, int tamanho, QString saida);

    int exercicio5Interativo(int X, int Y);
    int exercicio5Recurtsivo(int X, int Y, int aux, int K);

    QString exercicio6Interativo(int n1, int n2, int produto, QString saida);
    QString exercicio6Recursivo(int n1, int n2, int produto, int contador, QString saida);
};

#endif // RESOLUCAO_H
