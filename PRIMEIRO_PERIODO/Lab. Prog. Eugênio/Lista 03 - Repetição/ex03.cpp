#include <iostream>

int main()
{
    int N, conta, contador;
    std::cin>>N;
    contador = 0;
    for(int i = 1; i * (i + 1) * (i +2) <= N; i++)
    {
        conta = i * (i + 1) * (i +2);
    }
        if(conta == N)
            contador++;
        if(contador == 1)
            std::cout<<"O número é triângular"<<'\n';
        else
            std::cout<<"O número não é triângular"<<'\n';

}
