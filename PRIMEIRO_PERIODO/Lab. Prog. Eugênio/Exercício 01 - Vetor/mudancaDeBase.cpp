#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int valor = 0;
    int opcao = 0;

    std::cout<<"Digite um valor inteiro positivo que deseja calcular a mudança de base: ";
    std::cin>>valor;

    if(valor <  0)
    {
        while(valor < 0)
        {
            std::cout<<"Valor inválido! Digite um número inteiro positivo: ";
            std::cin>>valor;
        }
    }

    std::cout<<"Valor aceito\n";

    do{
        //system("clear");
        std::cout<<"\n MENU DE OPÇÕES";
        std::cout<<"\n1 - Base 2\n";
        std::cout<<"2 - Base 8\n";
        std::cout<<"3 - Base 16\n";
        std::cout<<"4 - Sair";
        std::cout<<"\nSelecione a opção: ";
        std::cin>>opcao;
        switch(opcao){

        case 1:
        {
            int aux = valor;
            int i = 0;
            int resultado = 0;
            while(aux != 0)
            {
                resultado = resultado + aux%2 * pow(10, i);
                aux = aux/2;
                i++;
            }
            std::cout<<"\nO número "<< valor<<" na base 2 é = "<<resultado<<".\n";
            break;
        }
        case 2:
        {
            int aux = valor;
            int i = 0;
            int resultado = 0;
            while(aux != 0)
            {
                resultado = resultado + aux%2 * pow(10, i);
                aux = aux/8;
                i++;
            }
            std::cout<<"\nO número "<< valor<<" na base 8 é = "<<resultado<<".\n";
            break;
        }
        case 3:
        {
            std::string hexa = "0123456789ABCDEF";
            int aux = valor;
            std::string x = " ";

            while(aux != 0)
            {
                x = hexa[aux%16] + x;
                aux = aux/16;
            }
            std::cout<<x<<'\n';
            break;
        }



        default:
            std::cout<<"Opção não encontrada.";

     }
    }
        while(opcao != 4);
        std::cout<<valor<<endl;





}
