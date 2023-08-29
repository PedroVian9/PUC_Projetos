#include <iostream>

int main()
{
 float custoDeFabrica = 0;
 float porcentagem = 0;
 float impostos = 0;
 float custo = 0;

 std::cout<<"\nDigite o Custo de Fábrica: ";
 std::cin>>custoDeFabrica;

 porcentagem = 0.12 * custoDeFabrica;
 impostos = 0.30 * custoDeFabrica;
 custo = custoDeFabrica + porcentagem + impostos;

 std::cout<<"\nO custo ao consumidor é: "<<custo<<'\n';
}
