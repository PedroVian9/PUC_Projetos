#include <iostream>

using namespace std;

int main()
{
   float A = 0;
   float B = 0;
   float C = 0;

   std::cout << "\nDigite o coeficiente A: ";
   std::cin >> A;
   std::cout << "\nDigite o coeficiente B: ";
   std::cin >> B;
   std::cout << "\nDigite o coeficiente C: ";
   std::cin >> C;


   float calculo = (B*B) - 4 * A * C;

    std::cout << "\nO resultado do delta é: " << calculo;
}
