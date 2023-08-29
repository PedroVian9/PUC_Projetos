#include <iostream>

int main()
{
    float precoNormal = 0;
    std::string categoria = " ";
    std::string diaDaSemana = " ";
    float valor = 0;

    std::cout<<"\nDigite o preço normal da fita: ";
    std::cin>>precoNormal;
        std::cout<<"Digite a categoria da fita (comum ou lançamento): ";
        std::cin>>categoria;
            std::cout<<"Digite o dia da semana que está alugando (segunda, terça, quarta, quinta, sexta, sabado ou domingo): ";
            std::cin>>diaDaSemana;

   if((diaDaSemana == "segunda" || diaDaSemana == "terça" || diaDaSemana == "quinta") && categoria == "comum")
       valor = precoNormal - (precoNormal * 0.40);
   if((diaDaSemana == "segunda" || diaDaSemana == "terça" || diaDaSemana == "quinta") && categoria == "lançamento")
       valor = (precoNormal - (precoNormal * 0.40)) + (precoNormal * 0.15);
   if((diaDaSemana == "quarta" || diaDaSemana == "sexta" || diaDaSemana == "sabado" || diaDaSemana == "domingo") && categoria == "comum")
       valor = precoNormal;
   if((diaDaSemana == "quarta" || diaDaSemana == "sexta" || diaDaSemana == "sabado" || diaDaSemana == "domingo") && categoria == "lançamento")
       valor = precoNormal + (precoNormal * 0.15);

   std::cout<<"\nO valor a ser pago pela locação da fita é R$"<<valor<<'\n';


}
