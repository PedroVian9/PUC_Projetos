#include <iostream>

int main()
{
    int n = 0;
    int nInvert = 0;
    std::cout<<"Digite um número: ";
    std::cin>>n;

    for(int i = n; i > 0; i = i/10)
    {
        nInvert = nInvert * 10 + i%10;
    }
    if(n==nInvert)
        std::cout<<"É capitua"<<'\n';
    else
        std::cout<<"Não é capitua"<<'\n';
}
