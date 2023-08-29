#include <iostream>


int main()
{
  int A = 0;
  int B = 0;
  int aux = 0;

  std::cout<<"\nDigite o valor de A: ";
  std::cin>>A;
  std::cout<<"Digite o valor de B: ";
  std::cin>>B;

  aux = B;
  B = A;
  A = aux;

  std::cout<<"\nO valor de A atual é: "<<A;
  std::cout<<"\nO valor de B atual é: "<<B<<'\n';

}
