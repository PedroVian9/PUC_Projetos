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
    int *arraySelectionSort = 0;
    int aux;
public:
    conjuntoAleatorio(int quantidade);
    ~conjuntoAleatorio();
    int getQuantidade() const;
    QString getConjunto();
    int verificar(int aux);
    int mostrarSelectionSort(int aux);
    QString getSelectionSort() const;

    void selectionSort();
};
}
#endif // CONJUNTOALEATORIO_H
