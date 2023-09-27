
#ifndef PILHA_H
#define PILHA_H
namespace gma{

class Pilha
{
private:
    int tam;
    int topo;
    int *vSeq;

public:
    Pilha(int tam);

    bool pilhaVazia()const{return(topo==-1);}
    bool pilhaCheia()const{return(topo==tam-1);}

    ~Pilha(){if(vSeq!=0)delete[]vSeq;}

    void empilhar(int valor);
    float desempilhar();
    float retornaTopo();
};
}
#endif // PILHA_H

