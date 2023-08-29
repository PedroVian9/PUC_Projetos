#ifndef CONJUNTOALEATORIO_H
#define CONJUNTOALEATORIO_H
#include <QString>
#include <ctime>
#include <random>

namespace PMPFV{
class conjuntoAleatorio
{
private:
    int quantidade = 0;
    int *array = 0;
public:
    conjuntoAleatorio(int quantidade);
    ~conjuntoAleatorio();
    int getQuantidade() const;
    QString getConjunto();
};
}
#endif // CONJUNTOALEATORIO_H
