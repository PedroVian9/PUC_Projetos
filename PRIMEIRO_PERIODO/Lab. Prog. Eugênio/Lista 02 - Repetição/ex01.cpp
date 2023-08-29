#include <iostream>

int main()
{
    double pi = 0;
    double s = 1;

    for(float i = 1.0; (4.0/i)>0.0001; i = i + 2.0)
    {
        pi = pi + (4.0/i) * s;
        s = s * (-1);
    }
    std::cout<<pi<<'\n';
}
