#include <iostream>
#include <string>
//Constante
const int tamanho = 5;

void lerVetor(int vet[], int tamanho, std::string str){
    for(int pos = 0; pos < tamanho; pos++){
        std::cout<<str<<" ["<<pos<<"] = ";
        std::cin>>vet[pos];
    }
}

void mostrarVetor(int vet[], int tamanho, std::string str){
    std::cout<<"\n "<<str<<" = [ ";
    for(int pos = 0; pos < tamanho; pos++){
        std::cout<< vet[pos] << " ";
    }
    std::cout<<"]\n";
}
int main()
{
    int array[tamanho];
    int vet[tamanho];
    lerVetor(array,tamanho,"Vetor A");
    mostrarVetor(array,tamanho,"Vetor A");
    lerVetor(vet,tamanho,"Vetor B");
    mostrarVetor(vet,tamanho,"Vetor B");
}
