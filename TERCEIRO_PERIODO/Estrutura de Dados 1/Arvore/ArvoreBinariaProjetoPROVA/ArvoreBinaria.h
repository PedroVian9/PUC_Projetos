#ifndef ARVOREBINARIA_H
#define ARVOREBINARIA_H
#include <pessoa.h>
#include <No.h>
#include <string>
#include <iostream>
#include <iarvorebinaria.h>
namespace ED1{
class ArvoreBinaria : public IArvoreBinaria
{
    //atributos
private:
    No* raiz;

    //Metodos
private:
    void inserirRecursivo(No **raiz, Pessoa elemento);
    void removerRecursivo(No **raiz, int elemento);
    void emOrdemCentralEsquerda(No* raiz)const;
    void emOrdemCentralDireita(No* raiz)const;
    void emOrdemPreEsquerda(No* raiz)const;
    void emOrdemPreDireita(No* raiz)const;
    void emOrdemPosEsquerda(No* raiz)const;
    void emOrdemPosDireita(No* raiz)const;
    int retornar_Maior(No **raiz);
public:
    ArvoreBinaria();
    ~ArvoreBinaria();
    void inserir(Pessoa elemento){this->inserirRecursivo(&raiz,elemento);}
    void remover(int elemento){this->removerRecursivo(&raiz, elemento);}
    void imprimirCentralEsquerda(){emOrdemCentralEsquerda(raiz);}
    void imprimirCentralDireita(){emOrdemCentralDireita(raiz);}
    void imprimirPreEsquerda(){emOrdemPreEsquerda(raiz);}
    void imprimirPreDireita(){emOrdemPreDireita(raiz);}
    void imprimirPosEsquerda(){emOrdemPosEsquerda(raiz);}
    void imprimirPosDireita(){emOrdemPosDireita(raiz);}
};
}
#endif // ARVOREBINARIA_H
