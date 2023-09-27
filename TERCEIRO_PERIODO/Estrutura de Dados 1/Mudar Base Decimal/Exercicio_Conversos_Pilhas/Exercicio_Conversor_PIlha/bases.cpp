#include "bases.h"
#include "pilha.h"
#include <iostream>
#include <QString>
namespace gma{

using namespace std;

Bases::Bases(int valor,int base):
    valor(0),
    base(0),
    seq(0)
{
    this->valor = valor;
    this->base = base;
}

Pilha p(20);

void Bases::dec2base(int valor, int base)
{
    int aux=0;

    for(int i=0; valor>0; i++)
    {
        seq[i]=valor%base;

        if(base==16 & seq[i] >= 10)
        {
            switch(seq[i])
            {
                case 10: seq[i] = 'A'; break;
                case 11: seq[i] = 'B'; break;

                case 12: seq[i] = 'C'; break;
                case 13: seq[i] = 'D'; break;
                case 14: seq[i] = 'E'; break;
                case 15: seq[i] = 'F'; break;
            }
        }
        p.empilhar(seq[i]);
        valor /= base;
        aux++;
    }
}
}

