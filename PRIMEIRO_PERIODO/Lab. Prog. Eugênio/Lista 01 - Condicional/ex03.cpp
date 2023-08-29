#include <iostream>

int main()
{
  int n1 = 0;
  int divisao = 0;
  int soma = 0;
  int resto = 0;
  int eleva = 0;
  std::cout << "Digite o número de 4 dígitos que deseja verificar: ";
  std::cin >> n1;
  divisao = n1 / 100;
  resto = n1 % 100;
  soma = divisao + resto;
  eleva = soma * soma;

  if(eleva == n1){
      std::cout << "O número possui a característica.\n";
  }
                   if(eleva != n1){
                   std::cout << "O número não possui a característica.\n";
  }


}
