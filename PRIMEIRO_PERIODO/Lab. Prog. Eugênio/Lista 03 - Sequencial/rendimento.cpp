#include <iostream>
#include <cmath>


int main()
{
    float aplicacaoMensal = 0;
    float taxa = 0;
    float numeroDeMeses = 0;
    std::cout<<"\nDigite a Aplicação Mensal: ";
    std::cin>>aplicacaoMensal;
    std::cout<<"\nDigite a Taxa: ";
    std::cin>>taxa;
    std::cout<<"\nDigite o número de meses: ";
    std::cin>>numeroDeMeses;

    float caTaxa = std::pow(1 - taxa, numeroDeMeses);

    float valorAcumulado = (caTaxa - 1)/taxa * aplicacaoMensal;

    std::cout<<"\nO rendimento é: "<<valorAcumulado<<"\n";

}
