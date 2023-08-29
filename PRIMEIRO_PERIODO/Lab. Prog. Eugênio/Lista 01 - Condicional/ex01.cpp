#include <iostream>

int main()
{
    int n = 0;
    std::cout << "Digite um número inteiro: ";
    std::cin >> n;
        if(n % 2 == 0){
            std::cout << " O número é par.\n";
        }
            if(n % 2 != 0){
            std::cout << "O número é ímpar.\n";
        }

}
