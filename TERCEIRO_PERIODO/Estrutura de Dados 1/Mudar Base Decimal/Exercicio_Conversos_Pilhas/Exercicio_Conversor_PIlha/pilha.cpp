#include <iostream>
#include "pilha.h"
#include <QString>
namespace gma{

Pilha::Pilha(int tam):
    tam(20),
    topo(-1),
    vSeq(0)
{
    if(tam <=0) throw QString("VALOR INVÁLIDO!");
    try {

        vSeq = new int[tam];
        this->tam = tam;

    }catch (std::bad_alloc &Erro){
        throw QString("MÁ ALOCAÇÃO DE MEMÓRIA!");
    }
}


void Pilha::empilhar(int valor)
{
    if(pilhaCheia()) throw QString("A PILHA ESTÁ CHEIA!");
    else
    {
        topo++;
        vSeq[topo] = valor;
    }
}

float Pilha::desempilhar()
{
    if(pilhaVazia()){
        throw QString("A PILHA JÁ ESTÁ VAZIA!");
        return 0;
    }
    else{
        return vSeq[topo-1];
        topo--;
    }
}

float Pilha::retornaTopo()
{
    return vSeq[topo];
}
}

