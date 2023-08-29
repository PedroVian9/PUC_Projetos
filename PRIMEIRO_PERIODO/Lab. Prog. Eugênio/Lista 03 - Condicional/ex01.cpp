#include <iostream>

int main()
{
    int nConta = 0;
    std::string tipoConta = " ";
    float metrosCubicos = 0;
    float valor = 0;

    std::cout<<"\nDigite seu número da conta: ";
    std::cin>>nConta;
        std::cout<<"Digite seu tipo de conta(residencial,  comercial  e  industrial): ";
        std::cin>>tipoConta;
            std::cout<<"Digite a quantidade de metros cúbicos gastos: ";
            std::cin>>metrosCubicos;

    if(tipoConta == "residencial")
        valor = 5 + metrosCubicos * 0.55;
    if(tipoConta == "comercial")
        valor = 150 + metrosCubicos * 1.25;
    if(tipoConta == "industrial")
        valor = 280 + metrosCubicos * 2.54;

    std::cout<<"\nSeu tipo de conta é "<<tipoConta;
    std::cout<<"\nO valor a ser pago é R$ "<<valor<<'\n';
}
