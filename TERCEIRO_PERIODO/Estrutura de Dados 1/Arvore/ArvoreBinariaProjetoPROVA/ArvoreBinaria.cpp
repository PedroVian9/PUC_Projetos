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

void ArvoreBinaria::inserirRecursivo(No **raiz, Pessoa elemento){
    if(*raiz == 0){
        *raiz = new No(elemento);
    }else
        if(elemento.getMatricula() < (*raiz)->getDado())
            inserirRecursivo(&(*raiz)->esquerda, elemento);
        else
            if(elemento.getMatricula() > (*raiz)->getDado() )
                inserirRecursivo(&(*raiz)->direita, elemento);
            else throw std::string("Elemento já Existe");
}

void ArvoreBinaria::emOrdemCentralEsquerda(No* raiz)const{
    if(raiz != 0){
        emOrdemCentralEsquerda(raiz->getEsquerda());
        std::cout<<std::endl<<"Elemento=>  "<<raiz->toString().toStdString();
        emOrdemCentralEsquerda(raiz->getDireita());
    }
}
void ArvoreBinaria::emOrdemCentralDireita(No* raiz)const{
    if(raiz != 0){
        emOrdemCentralDireita(raiz->getDireita());
        std::cout<<std::endl<<"Elemento=>  "<<raiz->toString().toStdString();
        emOrdemCentralDireita(raiz->getEsquerda());
    }
}
void ArvoreBinaria::emOrdemPreEsquerda(No* raiz)const{
    if(raiz != 0){
        std::cout<<std::endl<<"Elemento=>  "<<raiz->getDado();
        emOrdemPreEsquerda(raiz->getEsquerda());
        emOrdemPreEsquerda(raiz->getDireita());
    }
}
void ArvoreBinaria::emOrdemPreDireita(No* raiz)const{
    if(raiz != 0){
        std::cout<<std::endl<<"Elemento=>  "<<raiz->getDado();
        emOrdemPreDireita(raiz->getDireita());
        emOrdemPreDireita(raiz->getEsquerda());
    }
}
void ArvoreBinaria::emOrdemPosEsquerda(No* raiz)const{
    if(raiz != 0){
        emOrdemPosEsquerda(raiz->getEsquerda());
        emOrdemPosEsquerda(raiz->getDireita());
        std::cout<<std::endl<<"Elemento=>  "<<raiz->getDado();
    }
}
void ArvoreBinaria::emOrdemPosDireita(No* raiz)const{
    if(raiz != 0){
        emOrdemPosEsquerda(raiz->getDireita());
        emOrdemPosEsquerda(raiz->getEsquerda());
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
