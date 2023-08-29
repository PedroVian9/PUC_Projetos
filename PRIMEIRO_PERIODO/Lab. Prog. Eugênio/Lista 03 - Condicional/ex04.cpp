#include <iostream>

int main()
{
    float valorInicial = 0;
    std::string respostaA = "";
    std::string respostaB = "";
    std::string respostaC = "";
    std::string respostaD = "";
    int valorA = 0;
    int valorB = 0;
    int valorC = 0;
    int valorD = 0;
    float valorTotal = 0;


    std::cout<<"\nDigite o valor inicial de fábrica: ";
    std::cin>>valorInicial;
        std::cout<<"Digite Sim ou Nao para as melhorias que deseja: "<<'\n';
        std::cout<<"A (Ar Condicionado): ";
        std::cin>>respostaA;
        std::cout<<"B (Pintura Metálica): ";
        std::cin>>respostaB;
        std::cout<<"C (Vidro Elétrico): ";
        std::cin>>respostaC;
        std::cout<<"D (Direção Hidráulica): ";
        std::cin>>respostaD;

   if(respostaA == "Sim") valorA = 1750;
   if(respostaA == "Nao") valorA = 0;
   if(respostaB == "Sim") valorB = 800;
   if(respostaB == "Nao") valorB = 0;
   if(respostaC == "Sim") valorC = 1200;
   if(respostaC == "Nao") valorC = 0;
   if(respostaD == "Sim") valorD = 2000;
   if(respostaD == "Nao") valorD = 0;

   valorTotal = valorInicial + valorA + valorB + valorC + valorD;

   std::cout<<"O valor total do carro é R$ "<<valorTotal<<'\n';





}
