#ifndef PILHA_H
#define PILHA_H


class Pilha
{
private:
    int tamanhoDaPilha;
    int topoDaPilha;
    int *ponteiroPilha;
public:
    Pilha(int tamanhoDaPilha);
    ~Pilha();
    void empilha(int resto)const;
    int retira()const;
    bool pilhaCheia()const{
        return (topoDaPilha == -1);
    };
    bool pilhaVazia()const{
        return (topoDaPilha == tamanhoDaPilha - 1);
    };
};
#endif // PILHA_H
