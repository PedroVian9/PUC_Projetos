#include <iostream>

int main()
{
    float quantia = 0;
    int opcao = 0;
    float conversao = 0;

    std::cout<<"\nDigite a quantia que deseja converter: ";
    std::cin>>quantia;

    for(int caso = 0; caso < 5; caso++){
        std::cout<<"\n 1 - Euro \n";
        std::cout<<" 2 - Libra Esterlina \n";
        std::cout<<" 3 - Dólar \n";
        std::cout<<" 4 - Iene \n";
        std::cout<<"\nSelecione uma das opções: ";
        std::cin>>opcao;


        if(opcao == 1){
            conversao = quantia / 6.617;
            std::cout<<"O valor convertido é "<<conversao<<" euros.\n";
        }
        if(opcao == 2){
            conversao = quantia / 6.816;
            std::cout<<"O valor convertido é "<<conversao<<" libras.\n";
        }
        if(opcao == 3){
            conversao = quantia / 5.071;
            std::cout<<"O valor convertido é "<<conversao<<" dólares.\n";
        }
        if(opcao == 4){
            conversao = quantia / 3.018;
            std::cout<<"O valor convertido é "<<conversao<<" ienes.\n";
        }
        if(opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4)
            std::cout<<"Opção inexistente. \n";

    }

}
