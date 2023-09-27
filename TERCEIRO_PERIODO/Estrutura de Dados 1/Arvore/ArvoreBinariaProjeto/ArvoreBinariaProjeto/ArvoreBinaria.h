#ifndef ARVOREBINARIA_H
#define ARVOREBINARIA_H
#include<No.h>
#include<string>
#include<iostream>
#include<iarvorebinaria.h>
namespace ED1{
class ArvoreBinaria : public IArvoreBinaria
{
    //atributos
private:
    No* raiz;

    //Metodos
private:
    void inserirRecursivo(No **raiz, int elemento);
    void removerRecursivo(No **raiz, int elemento);

    void centralAEsquerda(No* raiz)const;
    void preFixadoAEsquerda(No* raiz)const;
    void posFixadoAEsquerda(No* raiz)const;
    void preFixadoADireita(No* raiz)const;
    void centralADireita(No* raiz)const;
    void posFixadoADireita(No* raiz)const;



    int retornar_Maior(No **raiz);
public:
    ArvoreBinaria();
    ~ArvoreBinaria();
    void inserir(int elemento){this->inserirRecursivo(&raiz,elemento);}
    void remover(int elemento){this->removerRecursivo(&raiz, elemento);}
    void imprimircentralAEsquerda(){centralAEsquerda(raiz);}
    void imprimirpreFixadoAEsquerda(){preFixadoAEsquerda(raiz);}
    void imprimirposFixadoAEsquerda(){posFixadoAEsquerda(raiz);}
    void imprimirpreFixadoADireita(){preFixadoADireita(raiz);}
    void imprimircentralADireita(){centralADireita(raiz);}
    void imprimirposFixadoADireita(){posFixadoADireita(raiz);}

};
}
#endif // ARVOREBINARIA_H
