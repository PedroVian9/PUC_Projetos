#include <iostream>

int main()
{
    int opcao = 0;
    int tamanho = 0;
   std::cout<<"Digite o tamanho de sua matriz: ";
   std::cin>>tamanho;

   const int qlinhaA = tamanho;
   const int qcolunaA = tamanho;
   const int qlinhaB = tamanho;
   const int qcolunaB = tamanho;
   const int qlinhaSoma = tamanho;
   const int qcolunaSoma = tamanho;
   const int linhaP = tamanho;
   const int colunaP = tamanho;

   int matrizA[qlinhaA][qcolunaA];
   std::cout<<"\nDigite os valores de sua matriz A "<<tamanho<<"x"<<tamanho<<"\n\n";
   for(int linha = 0; linha < qlinhaA; linha++)
   {
       for(int coluna = 0; coluna < qcolunaA; coluna++)
       {
           std::cout<<"MatrizA["<<linha<<"]["<<coluna<<"] = ";
           std::cin>>matrizA[linha][coluna];
       }
   }
   std::cout<<'\n';

   int matrizB[qlinhaB][qcolunaB];
   std::cout<<"Digite os valores de sua matriz B "<<tamanho<<"x"<<tamanho<<"\n\n";
   for(int linha = 0; linha < qlinhaB; linha++)
   {
       for(int coluna = 0; coluna < qcolunaB; coluna++)
       {
           std::cout<<"MatrizB["<<linha<<"]["<<coluna<<"] = ";
           std::cin>>matrizB[linha][coluna];
       }
   }
int matrizSoma[qlinhaSoma][qcolunaSoma];

   do {
       std::cout<<"\n\nMENU DE OPÇÕES"<<'\n';
       std::cout<<"1 - Adição"<<'\n';
       std::cout<<"2 - Subtração"<<'\n';
       std::cout<<"3 - Multiplicação"<<'\n';
       std::cout<<"9 - Sair\n";
       std::cout<<"Selecione uma opção: ";
       std::cin>>opcao;
       std::cout<<'\n';
       switch(opcao){
       case 1:
       {

           for(int linha = 0; linha < qlinhaSoma; linha++)
           {
               for(int coluna = 0; coluna < qcolunaSoma; coluna++)
               {
                   int  matrizSoma = matrizA[linha][coluna] + matrizB[linha][coluna];
                   std::cout<<"MatrizSoma["<<linha<<"]["<<coluna<<"] = "<<matrizSoma<<'\n';

               }
           }
           std::cout<<'\n';

           for(int linha = 0; linha < qlinhaA; linha++)
             {
                 std::cout<<"\n|";
                 for(int coluna = 0; coluna < qcolunaA; coluna++)
                 {
                     std::cout<<matrizA[linha][coluna]<<"  ";
                 }
                 std::cout<<"|";
             }

           std::cout<<"\n\n    +"<<'\n';

           for(int linha = 0; linha < qlinhaB; linha++)
             {
                 std::cout<<"\n|";
                 for(int coluna = 0; coluna < qcolunaB; coluna++)
                 {
                     std::cout<<matrizB[linha][coluna]<<"  ";
                 }
                 std::cout<<"|";
             }
           std::cout<<"\n\n    ="<<'\n';

           for(int linha = 0; linha < qlinhaSoma; linha++)
             {
                 std::cout<<"\n|";
                 for(int coluna = 0; coluna < qcolunaSoma; coluna++)
                 {
                     matrizSoma[linha][coluna]= matrizA[linha][coluna] + matrizB[linha][coluna];
                     std::cout<<matrizSoma[linha][coluna]<<"  ";
                 }
                 std::cout<<"|";
             }
           std::cout<<"\n";
                    break;
       }
       case 2:{

           for(int linha = 0; linha < qlinhaSoma; linha++)
           {
               for(int coluna = 0; coluna < qcolunaSoma; coluna++)
               {
                   int  matrizSoma = matrizA[linha][coluna] + matrizB[linha][coluna];
                   std::cout<<"MatrizSoma["<<linha<<"]["<<coluna<<"] = "<<matrizSoma<<'\n';

               }
           }
           std::cout<<'\n';

           for(int linha = 0; linha < qlinhaA; linha++)
             {
                 std::cout<<"\n|";
                 for(int coluna = 0; coluna < qcolunaA; coluna++)
                 {
                     std::cout<<matrizA[linha][coluna]<<"  ";
                 }
                 std::cout<<"|";
             }

           std::cout<<"\n\n    -"<<'\n';

           for(int linha = 0; linha < qlinhaB; linha++)
             {
                 std::cout<<"\n|";
                 for(int coluna = 0; coluna < qcolunaB; coluna++)
                 {
                     std::cout<<matrizB[linha][coluna]<<"  ";
                 }
                 std::cout<<"|";
             }
           std::cout<<"\n\n    ="<<'\n';

           for(int linha = 0; linha < qlinhaSoma; linha++)
             {
                 std::cout<<"\n|";
                 for(int coluna = 0; coluna < qcolunaSoma; coluna++)
                 {
                     matrizSoma[linha][coluna]= matrizA[linha][coluna] - matrizB[linha][coluna];
                     std::cout<<matrizSoma[linha][coluna]<<"  ";
                 }
                 std::cout<<"|";
             }
           std::cout<<"\n";
                   break;
       }
       case 3:
       {

           for(int linha = 0; linha < qlinhaA; linha++)
             {
                 std::cout<<"\n|";
                 for(int coluna = 0; coluna < qcolunaA; coluna++)
                 {
                     std::cout<<matrizA[linha][coluna]<<"  ";
                 }
                 std::cout<<"|";
             }

           std::cout<<"\n\n    *"<<'\n';

           for(int linha = 0; linha < qlinhaB; linha++)
             {
                 std::cout<<"\n|";
                 for(int coluna = 0; coluna < qcolunaB; coluna++)
                 {
                     std::cout<<matrizB[linha][coluna]<<"  ";
                 }
                 std::cout<<"|";
             }
           std::cout<<"\n\n    ="<<"\n\n";

           int temp = 0;
           int produto[linhaP][colunaP];
           for(int linha = 0; linha < 3; linha++){
               for(int coluna = 0; coluna < 3; coluna++){
                   temp = 0;
                   for(int i = 0; i < 3; i++){
                       temp += matrizA[linha][i] * matrizB[i][coluna];
                   }
                   produto[linha][coluna] = temp;
                   std::cout << produto[linha][coluna] << "  ";
               }
               std::cout << "\n";
           }
       }




       default:
       {
       {
                   std::cout<<"Opção não encontrada.";
                   break;
       }
       }

    }
}
      while(opcao != 9);

   }
