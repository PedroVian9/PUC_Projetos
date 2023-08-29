#include <iostream>
#include <cmath>
int main()
{
    double pi = 0;
    double s = 1;
    double denom = 1;
    double soma = 0;
    for(int t = 1; t <= 51; t++)
    {
        soma = soma + ((1.0/std::pow(denom,3)) * s);
        denom = denom + 2;
        s = s * (-1);
    }
    pi = std::pow((soma*32),1.0/3.0);
    std::cout<<pi<<'\n';
}
