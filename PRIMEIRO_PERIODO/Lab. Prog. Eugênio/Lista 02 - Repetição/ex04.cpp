#include <iostream>

int main()
{
    for(int n = 1000; n <= 9999; n++)
    {
        int v = n/100 + n%100;
        if(v * v == n)
        {
            std::cout<<n<<'\n';
        }
    }
}
