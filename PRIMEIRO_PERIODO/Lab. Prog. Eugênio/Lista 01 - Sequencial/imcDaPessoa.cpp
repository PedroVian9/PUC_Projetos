#include <iostream>
#include <string>
#include <cmath>

/*
 *
 * fazer um programa que leia o nome completo de uma pessoa seu peso e sua altura.
 * Calcule e escreva o imc dessa pessoa
 *
 * */
int main()
{
   std::string nomeCompleto = "";
   int peso = 0;
   float altura = 0;
   std::cout<<"\nDigite seu nome completo: ";
   std::getline(std::cin,nomeCompleto);
   std::cout<<"Digite seu peso: ";
   std::cin>>peso;
   std::cout<<"Digite sua altura: ";
   std::cin>>altura;

   //float imc =(peso/(altura*altura));
   float imc = (peso/ std::pow(altura,2));
   std::cout<<"\n"<<nomeCompleto<<" seu IMC é "<<imc<<"\n\n";

}
