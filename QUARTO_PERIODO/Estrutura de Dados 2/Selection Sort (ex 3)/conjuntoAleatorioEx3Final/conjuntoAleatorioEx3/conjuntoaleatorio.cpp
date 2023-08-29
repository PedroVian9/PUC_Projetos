#include "conjuntoaleatorio.h"
namespace PMPFV{

conjuntoAleatorio::conjuntoAleatorio(int quantidade):
    quantidade(0)
{
    if(quantidade<=0) throw QString ("Tamanho não pode ser negativo nem 0");
    array = new int[quantidade];
    arraySelectionSort = new int[quantidade];
    this->quantidade=quantidade;
    unsigned int seed = static_cast<unsigned int>(std::time(nullptr));
    std::srand(seed);
    for(int i=0;i<quantidade;i++){
        int numeroAleatorio = std::rand() %1000 +1;
        array[i] = numeroAleatorio;
        arraySelectionSort[i] = numeroAleatorio;
}
}

conjuntoAleatorio::~conjuntoAleatorio(){
   delete array;
}

int conjuntoAleatorio::getQuantidade() const
{
    return quantidade;
}

QString conjuntoAleatorio::getConjunto(){
    QString saida = "";
    for(int i=0;i<quantidade;i++){
    saida+= QString::number(array[i]) + " | ";
    }
    return saida;
}

int conjuntoAleatorio::verificar(int aux)
{
    for(int i=0;i<quantidade;i++){
          if(aux == arraySelectionSort[i]){
              return i;
          }
          if(aux < arraySelectionSort[i]){
              throw QString ("Não encontrado");
          }
      }
    throw QString("Numero nao encontrado.");
}

QString conjuntoAleatorio::getSelectionSort() const
{
    QString saida = "";
    for(int i=0;i<quantidade;i++){
    saida+= QString::number(arraySelectionSort[i]) + " | ";
    }
    return saida;
}

void conjuntoAleatorio::selectionSort()
{
    for(int step = 0; step < quantidade - 1; step++)
    {
        int min_idx = step;
        for(int i = step + 1; i < quantidade; i++)
        {
            if(arraySelectionSort[i] < arraySelectionSort[min_idx])
            {
                min_idx = i;
            }
        }
        int temp = arraySelectionSort[step];
        arraySelectionSort[step] = arraySelectionSort[min_idx];
        arraySelectionSort[min_idx] = temp;
    }
}

}
