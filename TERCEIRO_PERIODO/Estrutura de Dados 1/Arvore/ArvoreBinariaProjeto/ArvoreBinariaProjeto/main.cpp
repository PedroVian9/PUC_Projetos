#include <iostream>
#include<ArvoreBinaria.h>
#include<QString>

int main()
{
    try {
        ED1::ArvoreBinaria teste;
        std::cout<<std::endl<<"Incluindo dados na árvore criada"<<std::endl;
        std::cout<<"Incluindo valor 50"<<std::endl;teste.inserir(50);
        std::cout<<"Incluindo valor 40"<<std::endl;teste.inserir(40);
        std::cout<<"Incluindo valor 60"<<std::endl;teste.inserir(60);
        std::cout<<"Incluindo valor 35"<<std::endl;teste.inserir(35);
        std::cout<<"Incluindo valor 45"<<std::endl;teste.inserir(45);
        std::cout<<"Incluindo valor 70"<<std::endl;teste.inserir(70);
        std::cout<<"Incluindo valor 56"<<std::endl;teste.inserir(56);
        //std::cout<<"Incluindo valor 60 repetido"<<std::endl;teste.inserir(60);

        std::cout<<std::endl<<"Mostrando os dados da árvore criada"<<std::endl;
        std::cout<<"\nEncaminhamento Central a Esquerda";
        teste.imprimircentralAEsquerda();
        std::cout<<std::endl;
        std::cout<<"\nPre Fixado a Esquerda";
        teste.imprimirpreFixadoAEsquerda();
        std::cout<<std::endl;
        std::cout<<"\nPos Fixado a Esquerda";
        teste.imprimirposFixadoAEsquerda();
        std::cout<<std::endl;
        std::cout<<"\nPre Fixado a Direita";
        teste.imprimirpreFixadoADireita();
        std::cout<<std::endl;
        std::cout<<"\nCentral a Direita";
        teste.imprimircentralADireita();
        std::cout<<std::endl;
        std::cout<<"\nPos Fixado a Direita";
        teste.imprimirposFixadoADireita();
        std::cout<<std::endl;

        std::cout<<"\nRemovendo o valor 60 da arvore"<<std::endl;
        teste.remover(60);
        std::cout<<std::endl<<"Mostrando os dados da árvore apos remover o valor";
        teste.imprimircentralAEsquerda();

        std::cout<<std::endl;
        std::cout<<std::endl<<"Mostrando a árvore sendo destruida"<<std::endl;

    } catch (std::string &erro) {
        std::cout<<std::endl<<"Erro: "<<erro<<std::endl;
    }
}
