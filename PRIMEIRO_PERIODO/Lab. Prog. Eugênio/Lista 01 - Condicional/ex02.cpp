#include <iostream>

int main()
{
    float salarioAtual = 0;
    float reajuste = 0;
    std::cout << "Digite seu salário atual: ";
    std::cin >> salarioAtual;

    if(salarioAtual <= 1050){
        reajuste = salarioAtual + (salarioAtual * 0.50);
    }
    if(salarioAtual > 1050){
        reajuste = salarioAtual + (salarioAtual * 0.30);
    }

    std::cout << "O salário reajustado é " << reajuste << '\n';
}
