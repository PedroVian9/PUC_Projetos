#include "No.h"

namespace ED1{

No::No(Pessoa obj):
    dado(obj.getMatricula()),
    obj(obj),
    direita(0),
    esquerda(0)
{

}
No::~No()
{
    std::cout<<"Metodo Destrutor do No Elemento = "<<this->dado<<std::endl;
    if(this->esquerda != 0) delete this->esquerda;
    if(this->direita != 0)  delete this->direita;
}
QString No::toString(){
    QString saida = QString::number(obj.getMatricula());
    saida += ";" + obj.getNome();
    return saida;
}

}
