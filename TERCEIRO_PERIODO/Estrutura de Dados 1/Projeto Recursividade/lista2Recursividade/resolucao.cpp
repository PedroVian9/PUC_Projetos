#include "resolucao.h"

resolucao::resolucao()
{

}

QString resolucao::exercicio1Interativo(int n)
{
    int somaN = 0;
    for(int i = 0; i <= n; i++){
        somaN = somaN + (i * i * i);
    }
    QString res="";
    res = QString::number(somaN);
    return res;
}

int resolucao::exercicio1Recursivo(int n, int somaN)
{
    if(n > 0){
            somaN+=(n * n * n);
            return exercicio1Recursivo(n-1, somaN);
    }
        else
        {
            return somaN;
    }
}

QString resolucao::exercicio2Interativo(int n)
{
    if(n < 1)
       {
          throw QString ("Valor inválido, digite novamente.");
       }
          QString res="";
          for(int i = n; i > 0; i--)
          {
            res+=QString::number(i);
            if((i+1)> 0)
            {
              res+=" ,";
            }
          }
          return res;
}

QString resolucao::exercicio2Recursivo(int n,QString saida)
{
   if(n > 0){
       saida += QString::number(n);
       if((n+1)> 0)
       {
         saida+=" ,";
       }
       return exercicio2Recursivo(n - 1, saida);
   }
   else return saida;
}

int resolucao::exercicio3Interativo()
{
 int menorValor = 0;
 int vetor[] = {5, 8, 29, 1, 69};

 for (int i = 1; i < 5; i++) {
     if(i == 1){
         menorValor = vetor[0];}
         if (vetor[i] <= menorValor) {
             menorValor = vetor[i];
         }
     }
 return menorValor;
}

int resolucao::exercicio3Recursivo(int vetor[], int tamanho, int valor, int contador)
{
    if(contador<tamanho)
            {
                if(valor>vetor[contador])
                {
                    valor = vetor[contador];
                }
                return exercicio3Recursivo(vetor, tamanho, valor, contador+1);
            }
    return valor;
}

QString resolucao::exercicio4Interativo(int n, int valor, int tamanho, QString saida)
{
    do
            {
                valor += tamanho * (n % 2);
                n = n / 2;
                tamanho *= 10;
            }
            while (n > 0);
            saida = QString::number(valor);
            return saida;
}

QString resolucao::exercicio4Recursivo(int n, int valor, int tamanho, QString saida)
{
    if(n>0)
            {
                valor += tamanho * (n % 2);
                return exercicio4Recursivo(n/2, valor, tamanho*10, saida);
            }
            saida = QString::number(valor);
            return saida;
}

int resolucao::exercicio5Interativo(int X, int Y)
{
    int K = X;
    for(int i = 1; i < Y; i++){
        K = K * X;
    }
    return K;
}

int resolucao::exercicio5Recurtsivo(int X, int Y, int aux, int K)
{
    if(aux < Y){
        K = K * X;
        return exercicio5Recurtsivo( X, Y, aux + 1,K);
    }
    else
    {
    return K;
    }
}

QString resolucao::exercicio6Interativo(int n1, int n2, int produto, QString saida)
{
    for(int i = 1; i<=n2; i++)
            {
                produto += n1;
            }
            saida =  QString::number(produto);
            return saida;
}

QString resolucao::exercicio6Recursivo(int n1, int n2, int produto, int contador, QString saida)
{
    if(contador<=n2)
           {
               produto += n1;
               return exercicio6Recursivo(n1, n2, produto, contador+1, saida);
           }
           saida = QString::number(produto);
           return saida;
}
