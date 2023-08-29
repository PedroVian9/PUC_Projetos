#include <iostream>

using namespace std;

int main()
{
    float n1 = 0;
    float n2 = 0;
    float n3 = 0;
    std::cout << "Digite sua nota 1: ";
    std::cin >> n1;
    std::cout << "Digite sua nota 2: ";
    std::cin >> n2;
    std::cout << "Digite sua nota 3: ";
    std::cin >> n3;

    float caN1 = n1 * 2;
    float caN2 = n2 * 3;
    float caN3 = n3 * 5;

    float media = (caN1 + caN2 + caN3)/10;

    std::cout << "\nA média final do aluno é: " << media << "\n";


}
