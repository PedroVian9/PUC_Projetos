#include <iostream>


int main()
{
    int ladoA = 0;
    int ladoB = 0;
    int ladoC = 0;

    std::cout<<"\nDigite o lado A: ";
    std::cin>>ladoA;
    std::cout<<"Digite o lado B: ";
    std::cin>>ladoB;
    std::cout<<"Digite o lado C: ";
    std::cin>>ladoC;

    if(ladoA == ladoB && ladoA == ladoC)
        std::cout<<"\nTriângulo Equilátero.\n";
    if(ladoA != ladoB && ladoB == ladoC || ladoB != ladoC && ladoC == ladoA || ladoC != ladoB && ladoB == ladoA)
        std::cout<<"\nTriângulo Isósceles.\n";
    if(ladoA != ladoB && ladoB != ladoC)
        std::cout<<"\nTriângulo escaleno.\n";


}
