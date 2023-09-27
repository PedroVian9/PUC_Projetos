#ifndef MUDARBASE_H
#define MUDARBASE_H
#include<QString>
#include<pilha.h>
namespace pv{
class MudarBase
{
private:
    int numero;
    int base;
public:
    MudarBase(int numero, int base);
    QString calcularMudancaDeBase()const;
};

}
#endif // MUDARBASE_H
