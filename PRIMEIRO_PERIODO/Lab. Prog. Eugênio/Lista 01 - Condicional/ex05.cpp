#include <iostream>
#include <string>

int main()
{
    float altura = 0;
    float peso = 0;
    std::string sexo = " ";
    std::cout<<"\nDigite seu sexo: ";
    std::cin>>sexo;
    std::cout<<"Digite sua altura: ";
    std::cin>>altura;

    /*
    if(sexo.compare("masculino")==0)
        peso = 72.7 * altura - 58;
    if(sexo.compare("feminino")==0)
        peso = 62.1 * altura - 44.7;
    */

    if(sexo == "masculino") peso = 72.7 * altura - 58;
    if(sexo == "feminino") peso = 62.1 * altura - 44.7;

    std::cout<<"Seu peso ideal é "<<peso<<"\n";

}
