#include <iostream>
#include <string>
#include <cmath>

int main()
{
    float tempoDeViagem, velocidadeMedia;
    std::cout<<"Digite o tempo de viagem: " << "\n";
    std::cin>> tempoDeViagem;
    std::cout<<"Digite a Velocidade Média: ";
    std::cin >> velocidadeMedia;
    float distancia = tempoDeViagem * velocidadeMedia;
    float quantidadeDeLitros = distancia/12;
    float custo = quantidadeDeLitros * 5.90 ;
    std::cout <<"O custo total rodando "<<distancia<<"km é de R$: "<<custo<<"\n";
    return 0;
}
