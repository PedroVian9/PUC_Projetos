#include "conjuntoaleatorio.h"
namespace PMPFV{

conjuntoAleatorio::conjuntoAleatorio(int quantidade):
    quantidade(0)
{
    if(quantidade<=0) throw QString ("Tamanho não pode ser negativo nem 0");
    array = new int[quantidade];
    this->quantidade=quantidade;
    unsigned int seed = static_cast<unsigned int>(std::time(nullptr));
    std::srand(seed);
    for(int i=0;i<quantidade;i++){
        int numeroAleatorio = std::rand() %1000 +1;
        array[i] = numeroAleatorio;
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
          if(aux == array[i]){
              return i;
          }
      }
      throw QString("Numero nao encontrado.");
}
}
