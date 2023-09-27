#include <iostream>
#include<ArvoreBinaria.h>
#include<QString>
#include <pessoa.h>
int main()
{
    try {
        Pessoa aux(20,"James");
        Pessoa aux2(80,"Piroca");
        ED1::ArvoreBinaria teste;
        std::cout<<std::endl<<"Incluindo dados na árvore criada"<<std::endl;
        std::cout<<"Incluindo valor 50"<<std::endl;teste.inserir(aux);
        std::cout<<"Incluindo valor 50"<<std::endl;teste.inserir(aux2);
        /*std::cout<<"Incluindo valor 40"<<std::endl;teste.inserir(40);
        std::cout<<"Incluindo valor 60"<<std::endl;teste.inserir(60);
        std::cout<<"Incluindo valor 35"<<std::endl;teste.inserir(35);
        std::cout<<"Incluindo valor 45"<<std::endl;teste.inserir(45);
        std::cout<<"Incluindo valor 70"<<std::endl;teste.inserir(70);
        std::cout<<"Incluindo valor 56"<<std::endl;teste.inserir(56);
        */
        //std::cout<<"Incluindo valor 60 repetido"<<std::endl;teste.inserir(60);

        std::cout<<std::endl<<"Mostrando os dados da árvore criada"<<std::endl;
        std::cout<<"Encaminhamento Central a Esquerda";
        teste.imprimirCentralEsquerda();
        std::cout<<std::endl;
        std::cout<<"Encaminhamento Central a Direita";
        teste.imprimirCentralDireita();
        std::cout<<std::endl;
        std::cout<<"Encaminhamento Pré-Fixado à esquerda";
        teste.imprimirPreEsquerda();
        std::cout<<std::endl;
        std::cout<<"Encaminhamento Pré-Fixado à direita";
        teste.imprimirPreDireita();
        std::cout<<std::endl;
        std::cout<<"Encaminhamento Pós-Fixado à esquerda";
        teste.imprimirPosEsquerda();
        std::cout<<std::endl;
        std::cout<<"Encaminhamento Pós-Fixado à direita";
        teste.imprimirPosDireita();
        std::cout<<std::endl;

        std::cout<<"\nRemovendo o valor 60 da arvore"<<std::endl;
        teste.remover(60);
        std::cout<<std::endl<<"Mostrando os dados da árvore apos remover o valor";
        //teste.imprimir();

        std::cout<<std::endl;
        std::cout<<std::endl<<"Mostrando a árvore sendo destruida"<<std::endl;

    } catch (std::string &erro) {
        std::cout<<std::endl<<"Erro: "<<erro<<std::endl;
    }
}
