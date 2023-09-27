#ifndef PILHA_H
#define PILHA_H

namespace pv{
class Pilha
{
private:
    int tamanho;
    int topo;
    int *array;

public:
    Pilha(int tamanho);
    ~Pilha();
};
}
#endif // PILHA_H
