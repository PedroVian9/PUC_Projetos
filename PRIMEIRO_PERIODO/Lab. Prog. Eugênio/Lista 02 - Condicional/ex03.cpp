#include <iostream>

int main()
{
    int idade = 0;
    std::cout<<"Digite sua idade: ";
    std::cin>>idade;

    if(idade <= 16)
        std::cout<<"\nNão-eleitor.\n";
    if(idade >= 18 && idade <= 65)
        std::cout<<"\nEleitor Obrigatório.\n";
    if(idade >= 16 && idade < 18 || idade > 65)
        std::cout<<"\nEleito facultativo.\n";

}
