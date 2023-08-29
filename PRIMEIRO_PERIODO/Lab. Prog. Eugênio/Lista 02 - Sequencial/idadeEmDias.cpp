#include <iostream>

int main()
{
   int ano = 0;
   int meses = 0;
   int dias = 0;
   std::cout << "\nDigite sua idade em anos: ";
   std::cin >> ano;
   std::cout << "Digite a quantidade de meses: ";
   std::cin >> meses;
   std::cout << "Digite a quantidade de dias: ";
   std::cin >> dias;

   int caano = ano * 365;
   int cameses = meses * 30;
   int cadias = dias;
   int idade = caano + cameses + cadias;

   std::cout << "Sua idade representada em dias é: " << idade << "\n";
}
