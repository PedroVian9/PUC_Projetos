#include <iostream>

int main()
{
    std::string nome = " ";
    int tipo = 0;
    float area = 0;
    float preco = 0;
    float precoFinal = 0;
    float precoCorrigido = 0;

    for (int i = 0; i < 3; i++)
    {
        std::cout<<"\nDigite o nome do fazendeiro: ";
        getline(std::cin, nome);
        std::cout<<"\nTipo 1: pulverização contra ervas daninhas\n";
        std::cout<<"Tipo 2: pulverização contra gafanhotos\n";
        std::cout<<"Tipo 3: pulverização contra broca\n";
        std::cout<<"Tipo 4: pulverização contra tudo acima\n";
        std::cout<<"Digite o tipo de pulverização que deseja: ";
        std::cin>>tipo;
        std::cout<<"Digite a área que irá pulverizar: ";
        std::cin>>area;

        switch(tipo)
        {
        case 1:
            preco = area * 50;
        break;
        case 2:
            preco = area * 100;
        break;
        case 3:
            preco = area * 150;
        break;
        case 4:
            preco = area * 250;
        break;
        default:
            std::cout<<"Tipo inexistente\n";
        break;
        }

        if(preco > 10750)
        {
            precoCorrigido = preco - (preco * 0.10);
        }
        else
        {
            precoCorrigido = preco;
        }

        if(area > 300)
        {
            precoFinal = precoCorrigido - (precoCorrigido * 0.05);
        }
        else
        {
            precoFinal = precoCorrigido;
        }

        std::cout<<"O valor a se pagar é "<<precoFinal<<" reais.\nd";




    }


}

