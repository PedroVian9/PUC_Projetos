#include <iostream>
#include <string>

int main()
{
    std::string nome = " ";
    int nConta = 0;
    float saldoBancario = 0;
    float valorSemestral = 0;
    std::cout<<"\nDigite seu nome: ";
    std::getline(std::cin, nome);
    std::cout<<"\nDigite o número da conta: ";
    std::cin>>nConta;
    std::cout<<"\nDigite seu saldo bancário: ";
    std::cin>>saldoBancario;

    valorSemestral = saldoBancario /6;

    if(valorSemestral <= 1000.00)
    {
        std::cout<<"Valor semestral = "<<valorSemestral;
        std::cout<<"\nTarifa Básica, R$ 25.00\n";
    }
    if(valorSemestral >= 1000.01 && valorSemestral <= 2000.00)
    {
        std::cout<<"Valor semestral = "<<valorSemestral;
        std::cout<<"\nTarifa Prata, R$ 20.00\n";
    }
    if(valorSemestral >= 2000.01 && valorSemestral <= 3500.00)
    {
        std::cout<<"Valor semestral = "<<valorSemestral;
        std::cout<<"\nTarifa Ouro, R$ 13.00\n";
    }
    if(valorSemestral > 3500.00)
    {
        std::cout<<"Valor semestral = "<<valorSemestral;
        std::cout<<"\nTarifa Prêmio, isenta";
    }
}
