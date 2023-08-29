#include <iostream>

using namespace std;

int main()
{
    float altura = 0;
    float raio = 0;
    std::cout << "\nDigite a altura do cilindro: ";
    std::cin >> altura;
    std::cout << "Digite o raio do cilindro: ";
    std::cin >> raio;

    float area = 2 * 3.1456 * (raio*(altura + raio));
    float volume = 3.1456 * (raio * raio) * altura;

    std::cout << "\nA área do cilindro é: " << area << "\n";
    std::cout << "O volume do cilindro é: " << volume << "\n";
}
