#include <iostream>

int main()
{
    int nAluno = 0;
    float n1 = 0;
    float n2 = 0;
    float n3 = 0;
    float mediaExer = 0;
    float mediaFinal = 0;
    char conceito = ' ';
    std::string resultado = " ";

    std::cout<<"\nDigite o número do aluno: ";
    std::cin>>nAluno;
        std::cout<<"Digite a nota 1 do aluno: ";
        std::cin>>n1;
             std::cout<<"Digite a nota 2 do aluno: ";
             std::cin>>n2;
                std::cout<<"Digite a nota 3 do aluno: ";
                std::cin>>n3;
                    std::cout<<"Digite a Média de Exercícios do aluno: ";
                    std::cin>>mediaExer;

   mediaFinal = (n1 + (n2 * 2) + (n3 * 3) + mediaExer)/7;

   if(mediaFinal < 4.0) conceito = 'E';
   if(mediaFinal >= 4.1 && mediaFinal <= 6.0) conceito = 'D';
   if(mediaFinal >= 6.1 && mediaFinal <= 7.5) conceito = 'C';
   if(mediaFinal >= 7.6 && mediaFinal <= 9.0) conceito = 'B';
   if(mediaFinal >= 9.1 && mediaFinal <= 10.0) conceito = 'A';

   if(conceito == 'A' || conceito == 'B' || conceito == 'C') resultado = "APROVADO";
   if(conceito == 'D' || conceito == 'E') resultado = "REPROVADO";

   std::cout<<"\nO número do aluno é: "<< nAluno <<'\n';
   std::cout<<"A nota 1 do aluno é: "<< n1 <<'\n';
   std::cout<<"A nota 2 do aluno é: "<< n2 <<'\n';
   std::cout<<"A nota 3 do aluno é: "<< n3 <<'\n';
   std::cout<<"A média dos exercícios do aluno é: "<< mediaExer <<'\n';
   std::cout<<"A média final do aluno é: "<< mediaFinal <<'\n';
   std::cout<<"O conceito correspondente é: "<< conceito <<'\n';
   std::cout<<resultado<<'\n';




}
