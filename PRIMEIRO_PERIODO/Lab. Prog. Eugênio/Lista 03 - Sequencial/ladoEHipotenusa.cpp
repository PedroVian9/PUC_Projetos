#include <iostream>
#include <cmath>

int main()
{
   int M = 0;
   int N = 0;
   std::cout<<"\nDigite o maior valor inteiro positivo: ";
   std::cin>>M;
   std::cout<<"\nDigite o menor valor inteiro positivo: ";
   std::cin>>N;

   int lado1 = M*M - N*N;
   int lado2 = 2 * M * N;
   int hip = M*M + N*N;

   std::cout<<"\nO valor do lado 1, lado 2 e da hipotenusa são, respectivamente: "<<lado1<<", "<<lado2<<" e "<<hip<<"."<<"\n";
}
