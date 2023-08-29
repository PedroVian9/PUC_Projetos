#include <iostream>
#include <math.h>

int main()
{
    int x = 0;
    int raiz = 0;
    int verifica = 0;
    std::cout << "Digite o número para verficação: ";
    std::cin >> x;
    raiz = sqrt(x);
    verifica = raiz * raiz;

    if(verifica == x){
        std::cout << "O número " << x << " é um quadrado perfeito\n";
    }
    if(verifica != x) {
        std::cout << "O número " << x << " não é um quadrado perfeito\n";
    }

}
