#include <iostream>
#include <math.h>

int main()
{
    float n1 = 0;
    float n2 = 0;
    float n3 = 0;
    int tipoM = 0;
    float media = 0;

    for (int i = 0; i < 3;i++)
    {
        std::cout<<"\nDigite sua n1: ";
        std::cin>>n1;
        std::cout<<"Digite sua n2: ";
        std::cin>>n2;
        std::cout<<"Digite sua n3: ";
        std::cin>>n3;

        std::cout<<"\n1.aritmética;\n";
        std::cout<<"2.ponderada\n";
        std::cout<<"3.harmônica\n";
        std::cout<<"4.geométrica\n";
        std::cout<<"5.quadrática.\n";
        std::cout<<"Digite a numeração correspondente a média que deseja calcular: ";
        std::cin>>tipoM;

        if(tipoM == 1)
        {
            media = n1+n2+n3/3;
            std::cout<<"A média é: "<<media<<'\n';
        }
            if(tipoM == 2)
            {
                media = (n1*3)+(n2*3)+(n3*4)/10;
                std::cout<<"A média é: "<<media<<'\n';
            }
                if(tipoM == 3)
                {
                    media = 3/((1/n1)+(1/n2)+(1/n3));
                    std::cout<<"A média é: "<<media<<'\n';
                }
                    if(tipoM == 4)
                    {
                        media = pow(n1*n2*n3, 1.0/3.0);
                        std::cout<<"A média é: "<<media<<'\n';
                    }
                        if(tipoM == 5)
                        {
                            media = std::sqrt(n1*2 + n2*2 + n3*2/(3));
                            std::cout<<"A média é: "<<media<<'\n';
                        }
                            if(tipoM != 1 && tipoM != 2 && tipoM != 3 && tipoM != 4 && tipoM != 4 )
                            {
                                std::cout<<"Tipo de média inexistente\n";
                            }

    }

}
