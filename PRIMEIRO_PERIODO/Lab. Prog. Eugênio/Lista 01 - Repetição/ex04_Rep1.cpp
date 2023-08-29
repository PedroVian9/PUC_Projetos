#include <iostream>
#include <cmath>

int main()
{
    float seno = 0;
    for(float angulo = 0; angulo <= 6.3; angulo = angulo + 0.1)
    {
        seno = angulo - std::pow(angulo,3)/6 + std::pow(angulo,5)/120 - std::pow(angulo,7)/5040;
        std::cout<<"O seno do angulo "<<angulo<<" é = "<<seno<<"\n";
    }
}
