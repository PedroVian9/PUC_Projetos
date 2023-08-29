#include <iostream>
#include <math.h>

int main()
{
   float A = 0;
   float B = 0;
   float C = 0;
   float delta = 0;
   std::cout<<"\nDigite o lado A: ";
   std::cin>>A;
   std::cout<<"Digite o lado B: ";
   std::cin>>B;
   std::cout<<"Digite o lado C: ";
   std::cin>>C;

   delta = B*B - 4*A*C;

   if(delta < 0)
       std::cout<<"\nRaízes imaginárias.\n";
   if(delta == 0)
   {
     float raiz = -B + sqrt(delta) / (2 * A);
       std::cout<<"\nRaíz única e igual a: "<<raiz<<".\n";
   }
   if(delta > 0)
   {
     float raiz1 = -B + sqrt(delta) / (2 * A);
     float raiz2 = -B - sqrt(delta) / (2 * A);
       std::cout<<"\nRaízes distintas, Raiz 1 igual a "<<raiz1<<" e Raiz 2 igual a "<<raiz2<<".\n";
   }




}
