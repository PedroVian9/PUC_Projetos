#include <iostream>

const int tamanho=10;
void lereimprimirvetor(int vetor[],int tamanho,std::string str)
{
    for(int i=0;i<tamanho;i++)
    {
        std::cout<<str<<"["<<i<<"]=";
        std::cin>>vetor[i];
    }
};

int main()
{
    int vetorA[tamanho];


    int vetorB[tamanho];


    int opcao;
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
                lereimprimirvetor(vetorA,tamanho,"vetorA");
                lereimprimirvetor(vetorB,tamanho,"vetorB");
            break;

            case 2:
            int vetor[20];
            for(int i=0;i<10;i++)
            {
                vetor[i] = vetorA[i];
                vetor[i+10] = vetorB[i];
            }
            for(int i=0;i<20;i++)
            {
                std::cout<<"Vetor C ["<<i<<"]= "<<vetor[i]<<"\n";
            }
            std::cout<<std::endl;
            break;

            case 3:
            {
            int i;
            for(i=0;vetorA[i]==vetorB[i] || i<10;i++);
            if(i == 10)
            {std::cout<<"SÃO IDENTICOS!"<<std::endl;}
            else
            {std::cout<<"NÃO SÃO IDENTICOS!"<<std::endl;}
            break;
            }

            case 4:
            {
            int i;
            for(i=0;vetorA[i]!=vetorB[i] || i<10;i++);
            if(i == 10)
            {std::cout<<"SÃO DISJUNTOS!"<<std::endl;}
            else
            {std::cout<<"NÃO SÃO DISJUNTOS!"<<std::endl;}
            break;
            }
        default:
        {
            std::cout<<"Opção não encontrada.\n";
        }
                     }
    }
    while(opcao!=9);
}
