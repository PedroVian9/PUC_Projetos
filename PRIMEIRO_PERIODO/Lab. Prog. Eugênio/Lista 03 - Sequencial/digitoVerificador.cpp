#include <iostream>



int main()
{
  int numeroDaConta = 0;
  std::cout<<"\nDigite o número da conta: ";
  std::cin>>numeroDaConta;

  float inverso1 = numeroDaConta%10;
  float inverso2 = numeroDaConta/10%10;
  float inverso3 = numeroDaConta/100%10;
  float inverso = inverso1*100 + inverso2*10 + inverso3;

  int numeroContaSoma = numeroDaConta + inverso;

  int inversoNumeroConta1 = numeroContaSoma/100;
  int inversoNumeroConta2 = numeroContaSoma/10;
  int inversoNumeroConta3 = numeroContaSoma/1;

  int contaOrdemPosicional = inversoNumeroConta1*1 + inversoNumeroConta2*2 + inversoNumeroConta3 * 3;
  int inversoOrdem = contaOrdemPosicional%10;

  std::cout<<"\nO número da conta passa a ser: "<<numeroDaConta<<"-"<<inversoOrdem<<"\n";




}
