#include <iostream>

int main()
{
 int tvLCD = 0;
 int tvLED = 0;
 int tvPLASMA = 0;
 float salarioFixo = 0;
 float salarioTotal = 0;

 std::cout<<"\nDigite o valor do salário fixo do funcionário: ";
 std::cin>> salarioFixo;
 std::cout<<"\nDigite a quantidade de Tv's de LCD vendidas pelo funcionário: ";
 std::cin>>tvLCD;
 std::cout<<"\nDigite a quantidade de Tv's de LED vendidas pelo funcionário: ";
 std::cin>>tvLED;
 std::cout<<"\nDigite a quantidade de Tv's de PLASMA vendidas pelo funcionário: ";
 std::cin>>tvPLASMA;

 float comissaotvLCD = 50 * tvLCD;
 float comissaotvLED = 60 * tvLED;
 float comissaotvPLASMA = 55 * tvPLASMA;
 salarioTotal = salarioFixo + comissaotvLCD + comissaotvLED + comissaotvPLASMA;

 std::cout<<"O salário do empregado calculado com salário fixo a R$ "<<salarioFixo<<" é: "<<salarioTotal<< '\n';

}
