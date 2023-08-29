#include <iostream>

int main()
{
  int tSeg = 0;
  std::cout << "Digite o tempo de duração em segundos: ";
  std::cin >> tSeg;

  float tHora = tSeg / 3600;
  float tMin = tSeg / 60;

  std::cout << "O tempo de duração expresso em horas é: " << tHora << "\n";
  std::cout << "O tempo de duração expresso em minutos é: " << tMin << "\n";
  std::cout << "O tempo de duração expresso em segundos é: " << tSeg<< "\n";
}
