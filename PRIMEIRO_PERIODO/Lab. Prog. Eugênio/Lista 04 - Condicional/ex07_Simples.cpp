#include <iostream>
#include <math.h>

int main()
{
  float volume = 0;
  float area = 0;
  float raio = 0;
  float altura = 0;
  int tipo = 0;

  for (int i = 0; i < 3; i++)
  {
      std::cout<<"\n1. Cone Reto\n";
      std::cout<<"2. Cilindro\n";
      std::cout<<"3. Esfera\n";
      std::cout<<"Escolha de acordo com a numeração, a forma geométrica que deseja utilizar: ";
      std::cin>>tipo;

      if(tipo == 1)
      {
          std::cout<<"\nDigite o raio do Cone Reto: ";
          std::cin>>raio;
          std::cout<<"Digite a altura do Cone Reto: ";
          std::cin>>altura;

          volume = 3.1415 * (raio*raio) * altura / 3;
          area = 3.1415 * sqrt((raio*raio)+(altura*altura));

          std::cout<<"\nO volume é "<<volume<<'\n';
          std::cout<<"A área é "<<area<<'\n';
      }
      if(tipo == 2)
      {
          std::cout<<"\nDigite o raio do Cilindro: ";
          std::cin>>raio;
          std::cout<<"Digite a altura do Cilindro: ";
          std::cin>>altura;

          volume = 3.1415 * (raio*raio) * altura;
          area = 2 * 3.1415 * raio * altura;

          std::cout<<"\nO volume é "<<volume<<'\n';
          std::cout<<"A área é "<<area<<'\n';
      }
      if(tipo == 3)
      {
          std::cout<<"\nDigite o raio da Esfera: ";
          std::cin>>raio;

          volume = (4/3) * 3.1415 * (raio*raio*raio);
          area = 4 * 3.1415 * (raio*raio);

          std::cout<<"\nO volume é "<<volume<<'\n';
          std::cout<<"A área é "<<area<<'\n';
      }
      if(tipo != 1 && tipo != 2 && tipo != 3)
      {
          std::cout<<"Impossivel calcular\n";
      }
  }
}
