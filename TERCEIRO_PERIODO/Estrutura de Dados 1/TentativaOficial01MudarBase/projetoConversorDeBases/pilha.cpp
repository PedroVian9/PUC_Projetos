#include <iostream>
#include "pilha.h"
#include <Qstring>

Pilha::Pilha(int tamanhoDaPilha):
    tamanhoDaPilha(0), topoDaPilha(-1), ponteiroPilha(0)
{
    if(tamanhoDaPilha <= 0){
        throw QString("Tamanho Inválido"); //grita
    }
    try{ //monitora
    ponteiroPilha = new int[tamanhoDaPilha]; //recebe tamanho da pilha
    this->tamanhoDaPilha = tamanhoDaPilha;
    }
    catch (std::bad_alloc & erro) { // resolve
        throw QString("Má locação de memória");
    }
}

void Pilha::empilha(int resto)
{
    if (pilhaCheia()){
        throw QString("A pilha está cheia");
    }
    topoDaPilha++;
    ponteiroPilha[topoDaPilha] = resto;

}

int Pilha::retira(int resto)
{
    if(pilhaVazia()){
        throw QString("A pilha está vazia");
    }
    topoDaPilha--;
    return resto;
}





