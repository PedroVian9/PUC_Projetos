#ifndef IARVOREBINARIA_H
#define IARVOREBINARIA_H
#include <pessoa.h>
namespace ED1{
class IArvoreBinaria{
    virtual void inserir(Pessoa elemento) = 0;
    virtual void imprimirCentralEsquerda() = 0;
    virtual void imprimirCentralDireita() = 0;
    virtual void imprimirPreEsquerda() = 0;
    virtual void imprimirPreDireita() = 0;
    virtual void imprimirPosEsquerda() = 0;
    virtual void imprimirPosDireita() = 0;
    virtual void remover(int elemento) = 0;
};
}
#endif // IARVOREBINARIA_H
