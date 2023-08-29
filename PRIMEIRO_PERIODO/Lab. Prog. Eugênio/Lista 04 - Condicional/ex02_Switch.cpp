#include <iostream>

int main()
{
    float valorProduto = 0;
    int opcao = 0;
    float valorFinal = 0;

    std::cout<<"\nDigite o valor atual do produto : ";
    std::cin>>valorProduto;

    for(int alternativas = 0; alternativas < 3; alternativas++){
        std::cout<<"\n 1 - À vista, dinheiro ou cheque.\n";
        std::cout<<" 2 - À vista, cartão de credito.\n";
        std::cout<<" 3 - Em 2 vezes.\n";
        std::cout<<" 4 - Em 3 vezes.\n";
        std::cout<<"\nSelecione uma das opções: ";
        std::cin>>opcao;

			switch(opcao)
			{
			case 1:
                valorFinal = valorProduto - (valorProduto * 0.10);
                std::cout<<"\nO valor final do produto é R$"<<valorFinal<<". Calculado com 10% de desconto.\n";
			break;
			
			case 2:
                valorFinal = valorProduto - (valorProduto * 0.05);
                std::cout<<"\nO valor final do produto é R$"<<valorFinal<<". Calculado com 5% de desconto.\n";
            break;
            
            case 3:
                valorFinal = valorProduto;
				std::cout<<"\nO valor final do produto é R$"<<valorFinal<<". Valor normal.\n";
            break;

            case 4:
                            valorFinal = valorProduto + (valorProduto * 0.10);
                            std::cout<<"\nO valor final do produto é R$"<<valorFinal<<". Valor normal + 10% de juros.\n";
            break;

            default:
                            std::cout<<"\nOpção inexistente.\n";
			break;
		}
		}
}
