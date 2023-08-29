#include <iostream>

int main()
{
    int N, conta = 0;
    std::cin>>N;

    for(int i = 1; i < N - 1; i++)
    {
        if(N%i == 0)
        {
            conta = conta + i;
        }
    }
    if(conta == N)
        std::cout<<"O número é perfeito."<<'\n';
    else
        std::cout<<"O número não é perfeito."<<'\n';
}
