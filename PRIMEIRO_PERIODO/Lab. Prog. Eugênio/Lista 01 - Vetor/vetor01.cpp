#include <iostream>

using namespace std;

int main()
{
    const int tamanho = 4;
    int vetor[tamanho];
    for(int pos = 0; pos < tamanho; pos++){
        std::cout<<"Vetor["<<pos<<"] = ";
        std::cin>>vetor[pos];
    }
    int opcao = 0;
    do{
        std::cout<<"\n1 - Mostrar os dados do conjunto na ordem contrária da que foi lida.\n";
        std::cout<<"2 - Ler um valor inteiro qualquer e verificar se este existe no conjunto lido.\n";
        std::cout<<"3 - Calcular e escrever a amplitude total deste conjunto.\n";
        std::cout<<"4 - Calcular   e   escrever   a   média   aritmética   deste conjunto.\n";
        std::cout<<"9 - Sair.\n";
        std::cout<<"Opção: ";
        std::cin>>opcao;
        switch(opcao){
        case 1:
            for(int pos = tamanho - 1; pos >= 0;pos--){
                cout<<vetor[pos]<<'\n';
            }
            break;
        case 2:
        {
            int num = 0;
            std::cout<<"Digite o número que deseja conferir: ";
            std::cin>>num;
            int c = 0;
            for(int pos = 0; pos < tamanho; pos++){
                if(num == vetor[pos])
                    c++;
            }
                if(c > 0){
                    std::cout<<"Valor encontrado.\n";
                }
                else{
                    std::cout<<"Valor não encontrado.\n";
                }
        }
            break;
        case 3:
        {
            int Ma = vetor[0];
            int Me = vetor[0];

        for(int pos = 0; pos < tamanho;pos++){
            if(vetor[pos] > Ma)
                Ma = vetor[pos];
            if(vetor[pos] < Me)
                Me = vetor[pos];
        }
        std::cout<<"O maior valor é: "<<Ma<<endl;
        std::cout<<"O menor valor é: "<<Me<<endl;
        }
            break;
        case 4:
        {
            float media = 0;
            for(int pos = 0; pos < tamanho; pos++){
                media = vetor[pos] + media;
            }
            float mediaA = media/tamanho;
            std::cout<<"A média é "<<mediaA<<endl;
            }
            break;
        default:
            std::cout<<"Opção não encontrada";
        }
    }
    while(opcao != 9);
}
