#include <iostream>


int main()
{
   int publico = 0;
   std::cout<<"\nDigite o público presente no estádio: ";
   std::cin>>publico;

   int popular = (publico * 0.10) * 5;
   int geral =  (publico * 0.50) * 10;
   int arquibancada = (publico * 0.30) * 20;
   int cadeira = (publico * 0.10) * 40;

   int renda = popular + geral + arquibancada + cadeira;

   std::cout<<"A renda total da partida é "<<renda<<"\n";

}
