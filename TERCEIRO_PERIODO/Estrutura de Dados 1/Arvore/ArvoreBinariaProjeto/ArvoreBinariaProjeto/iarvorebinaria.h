#ifndef IARVOREBINARIA_H
#define IARVOREBINARIA_H
namespace ED1{
class IArvoreBinaria{
    virtual void inserir(int elemento) = 0;

    virtual void imprimircentralAEsquerda() = 0;
    virtual void imprimirpreFixadoAEsquerda() = 0;
    virtual void imprimirposFixadoAEsquerda()=0;
    virtual void imprimirpreFixadoADireita()=0;
    virtual void imprimircentralADireita()=0;
    virtual void imprimirposFixadoADireita()=0;

    virtual void remover(int elemento) = 0;
};
}
#endif // IARVOREBINARIA_H
