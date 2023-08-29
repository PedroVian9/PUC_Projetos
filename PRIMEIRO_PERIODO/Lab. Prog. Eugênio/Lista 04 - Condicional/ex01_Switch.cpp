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

        switch(opcao)

        case 1:
            conversao = quantia / 6.617;
            std::cout<<"O valor convertido é "<<conversao<<" euros.\n";
        break;

        case 2:
            conversao = quantia / 6.816;
            std::cout<<"O valor convertido é "<<conversao<<" libras.\n";
        break;

        case 3:
            conversao = quantia / 5.071;
            std::cout<<"O valor convertido é "<<conversao<<" dólares.\n";
        break;

        case 4:
            conversao = quantia / 3.018;
            std::cout<<"O valor convertido é "<<conversao<<" ienes.\n";
        break;

        default:
            std::cout<<"Opção inexistente. \n";
        break;

    }

}
