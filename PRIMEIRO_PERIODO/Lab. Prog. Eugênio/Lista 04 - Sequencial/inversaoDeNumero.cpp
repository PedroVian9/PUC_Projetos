#include <iostream>


int main()
{
   int numeroOriginal = 0;
   int numeroInvertido = 0;

   std::cout<<"\nDigite o número que deseja inverter: ";
   std::cin>>numeroOriginal;
   float inverso1 = numeroOriginal%10;
   float inverso2 = numeroOriginal/10%10;
   float inverso3 = numeroOriginal/100%10;

   numeroInvertido = inverso1 * 100 + inverso2 * 10 + inverso3;

   std::cout<<"\nO número original é: "<<numeroOriginal;
   std::cout<<"\nO número invertido é: "<<numeroInvertido<<'\n';

}
