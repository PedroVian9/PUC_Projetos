#include <iostream>
#include <string>
#include <cmath>

int main()
{
    float x1 = 0;
    float y1 = 0;
    float x2 = 0;
    float y2 = 0;
    std::cout << "Digite o x1: " << "\n";
    std::cin >> x1;
    std::cout << "Digite o y1: " << "\n";
    std::cin >> y1;
    std::cout << "Digite o x2: " << "\n";
    std::cin >> x2;
    std::cout << "Digite o y2: " << "\n";
    std::cin >> y2;
    float distancia = std::sqrt(std::pow((x2 - x1),2) + std::pow((y2 - y1),2));
    std::cout << "A distância entre os pontos é: " << distancia << "\n";



    return 0;
}
