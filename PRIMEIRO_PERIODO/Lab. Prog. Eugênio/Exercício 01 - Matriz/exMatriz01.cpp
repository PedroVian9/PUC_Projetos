#include <iostream>

int main()
{
   const int qlinha = 3;
   const int qcoluna = 3;

   int matriz[qlinha][qcoluna];
   std::cout<<"Digite os valores de sua matriz 3x3: \n\n";
   for(int linha = 0; linha < qlinha; linha++)
   {
       for(int coluna = 0; coluna < qcoluna; coluna++)
       {
           std::cout<<"Matriz["<<linha<<"]["<<coluna<<"] = ";
           std::cin>>matriz[linha][coluna];
       }
   }
   std::cout<<'\n';
}
