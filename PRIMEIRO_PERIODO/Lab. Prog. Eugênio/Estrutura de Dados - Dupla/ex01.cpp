
#include <iostream>

const int tamanho = 10;

void lerVetor(int vet[], int tamanho, std::string str)
{
    for(int pos = 0; pos < tamanho; pos++)
    {
        std::cout<<str<<" ["<<pos<<"] = ";
        std::cin>>vet[pos];
    }
}
void mostrarVetor(int vet[], int tamanho, std::string str)
{
    std::cout<<"\n "<<str<<" = [ ";
    for(int pos = 0; pos < tamanho; pos++)
    {
        std::cout<<vet[pos] << " ";
    }
    std::cout<<"]\n";
}
int main()
{
    int opcao = 0;
    int A[tamanho];
    int B[tamanho];
  do
    {
        std::cout<<"\nMENU DE OPÇÕES\n";
        std::cout<<"\n1 - Leia  dois  conjuntos A  e  B de  números  inteiros,  o tamanho de cada conjunto será 10\n";
        std::cout<<"2 - Determine o conjunto C = A união com B\n";
        std::cout<<"3 - Descubra se A e B são conjuntos idênticos\n";
        std::cout<<"4 - Descubra se A e B são conjuntos disjuntos\n";
        std::cout<<"9 - Sair\n";
        std::cout<<"\nDigite a opção que deseja: ";
        std::cin>>opcao;
        switch(opcao){
        case 1:
            lerVetor(A,tamanho,"Vetor A");
            lerVetor(B,tamanho,"Vetor B");
            mostrarVetor(A,tamanho,"Vetor A");
            mostrarVetor(B,tamanho,"Vetor B");
            break;
       case 2:
        {
            int x = 0;
            int tamanhoC = 20;
            int C[tamanhoC];
            for(int i = 0; i < 10; i++)
            {
                C[i] = A[i];
            }
            for(int i = 10; i < 20; i++)
            {

                C[i] = B[x];
                 x++;
            }
            mostrarVetor(C,tamanhoC,"Vetor C(Uniao A e B)");
            break;
        }
      case 3:
        {
            int c = 0;
           for(int i = 0;i < 10;i++)
           {
               for(int j = 0;j<10;j++)
                {
                   if(A[i] == B[j])
                   {
                       c++;
                   }
               }


           }
           if(c == 10)
           {
               std::cout<<"È identico!!!\n";
           }
           else
           {
               std::cout<<"Não é identico!!!\n";
           }
            break;
        }
        case 4:
        {
            int c = 0;
           for(int i = 0;i < 10;i++)
           {
               for(int j = 0;j<10;j++)
                {
                   if(A[i] != B[j])
                   {
                       c++;
                   }
               }


           }
           if(c != 10)
           {
               std::cout<<"È disjunto!!!\n";
           }
           else
           {
               std::cout<<"Não é disjunto!!!\n";
           }
            break;
        }
            default:
            std::cout<<"Opção não encontrada.\n";

        }

    }
    while(opcao != 9);
}
