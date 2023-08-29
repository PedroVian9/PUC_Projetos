#include <iostream>


int main()
{
  float valorAtualDaPrestacao = 0;
  float taxaDeJuros = 0;
  float tempoDeAtraso = 0;


  std::cout<<"\nDigite o valor atual da prestação: ";
  std::cin>>valorAtualDaPrestacao;
  std::cout<<"\nDigite o valor da taxa de juros: ";
  std::cin>>taxaDeJuros;
  std::cout<<"\nDigite o tempo de atraso: ";
  std::cin>>tempoDeAtraso;

  float valorAtualizado = valorAtualDaPrestacao + (valorAtualDaPrestacao * (taxaDeJuros/100) * tempoDeAtraso);

  std::cout<<"\nO valor atualizado é: "<<valorAtualizado<<"\n";
}
