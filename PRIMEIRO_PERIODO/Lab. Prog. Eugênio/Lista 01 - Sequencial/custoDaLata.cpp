#include <iostream>
#include <cmath>

int main()
{
    float raio = 0;
    float altura = 0;
    std::cout<<"\nDigite o raio da lata:";
    std::cin>>raio;
    std::cout<<"Digite a altura da lata: ";
    std::cin>>altura;
    float areaDaBase = 0;
    areaDaBase = (3.1415 * std::pow(raio,2) * 2);
    float areaDoLado = 0;
    areaDoLado = (2 * 3.1415 * raio * altura);
    float areaDaLata = areaDaBase + areaDoLado;
    float custoDaLata = areaDaLata * 155;
    std::cout<<"O custo da lata é R$ "<<custoDaLata<<"\n";
    return 0;
}
