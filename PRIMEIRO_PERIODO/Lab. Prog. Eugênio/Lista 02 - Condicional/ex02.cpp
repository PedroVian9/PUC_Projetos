#include <iostream>

int main()
{
   int A = 0;
   int B = 0;
   int C = 0;
   std::cout<<"\nDigite o lado A do triângulo: ";
   std::cin>>A;
   std::cout<<"Digite o lado B do triângulo: ";
   std::cin>>B;
   std::cout<<"Digite o lado C do triângulo: ";
   std::cin>>C;

   if(A < B + C && B < A + C && C < A + B)
       std::cout<<"\nForma Triângulo.\n";
   if(A >= B + C || B >= A + C || C >= A + B)
       std::cout<<"\nNão forma Triângulo.\n";

}
