#include "ArvoreBinaria.h"

namespace ED1{
ArvoreBinaria::ArvoreBinaria():
    raiz(0)
{
}

ArvoreBinaria::~ArvoreBinaria()
{
    if(raiz != 0){
        delete raiz;
    }
}

void ArvoreBinaria::inserirRecursivo(No **raiz, int elemento){
    if(*raiz == 0){
        *raiz = new No(elemento);
    }else
        if(elemento < (*raiz)->getDado())
            inserirRecursivo(&(*raiz)->esquerda, elemento);
        else
            if(elemento > (*raiz)->getDado() )
                inserirRecursivo(&(*raiz)->direita, elemento);
            else throw std::string("Elemento já Existe");
}

void ArvoreBinaria::centralAEsquerda(No* raiz)const{
    if(raiz != 0){
        centralAEsquerda(raiz->getEsquerda());
        std::cout<<std::endl<<"Elemento=>  "<<raiz->getDado();
        centralAEsquerda(raiz->getDireita());
    }
}

void ArvoreBinaria::preFixadoAEsquerda(No *raiz) const
{
    if(raiz != 0){
        std::cout<<std::endl<<"Elemento=>  "<<raiz->getDado();
        preFixadoAEsquerda(raiz->getEsquerda());
        preFixadoAEsquerda(raiz->getDireita());
    }
}

void ArvoreBinaria::posFixadoAEsquerda(No *raiz) const
{
   if(raiz != 0){
       posFixadoAEsquerda(raiz->getEsquerda());
       posFixadoAEsquerda(raiz->getDireita());
       std::cout<<std::endl<<"Elemento=>  "<<raiz->getDado();
   }
}

void ArvoreBinaria::preFixadoADireita(No *raiz) const
{
    if(raiz != 0){
        std::cout<<std::endl<<"Elemento=>  "<<raiz->getDado();
        preFixadoADireita(raiz->getDireita());
        preFixadoADireita(raiz->getEsquerda());
    }
}

void ArvoreBinaria::centralADireita(No *raiz) const
{
    if(raiz != 0){
    centralADireita(raiz->getDireita());
    std::cout<<std::endl<<"Elemento=>  "<<raiz->getDado();
    centralADireita(raiz->getEsquerda());
    }
}

void ArvoreBinaria::posFixadoADireita(No *raiz) const
{
    if(raiz != 0){
    posFixadoADireita(raiz->getDireita());
    posFixadoADireita(raiz->getEsquerda());
    std::cout<<std::endl<<"Elemento=>  "<<raiz->getDado();
    }
}

int ArvoreBinaria::retornar_Maior(No **raiz){
    int valor;
    No *aux = 0;
    if((*raiz)->direita != 0) return (retornar_Maior(&(*raiz)->direita));
    else{
        aux = *raiz;
        valor = (*raiz)->getDado();
        *raiz = (*raiz)->esquerda;
        aux->esquerda = 0;
        aux->direita = 0;
        delete aux;
        return valor;
    }
}

void ArvoreBinaria::removerRecursivo(No **raiz, int elemento){
    No *aux = 0;
    if(*raiz != 0){
        if((*raiz)->getDado() == elemento){
            aux = *raiz;
            if((*raiz)->esquerda == 0){
                *raiz = (*raiz)->direita;
                aux->esquerda = 0;
                aux->direita = 0;
                delete aux;
            }else
                if((*raiz)->direita == 0){
                    *raiz = (*raiz)->esquerda;
                    aux->esquerda = 0;
                    aux->direita = 0;
                    delete aux;
                }else
                    {
                        (*raiz)->setDado(this->retornar_Maior(&(*raiz)->esquerda));
                    }
        }else
            {
                if((*raiz)->getDado() < elemento)
                    removerRecursivo(&(*raiz)->direita,elemento);
                else
                    if((*raiz)->getDado() > elemento)
                        removerRecursivo(&(*raiz)->esquerda,elemento);
        }

    }//ok
    else throw std::string("Elemento não Existe");//ok
}

}
