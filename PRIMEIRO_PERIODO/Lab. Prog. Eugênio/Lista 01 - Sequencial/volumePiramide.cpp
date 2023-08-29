#include <iostream>
#include <cmath>

int main()
{
   float base = 0;
   std::cout<<"Qual a base da pirâmide? ";
   std::cin>> base;
   float altura = 0;
   std::cout<<"Qual a altura da pirâmide? ";
   std::cin>> altura;
   float volume = (1.0/3.0) * base * altura;
   std::cout<<"O volume da pirâmide é: "<< volume << "\n";


    return 0;
}
