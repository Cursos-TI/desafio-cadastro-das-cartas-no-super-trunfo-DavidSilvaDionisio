// A diretiva #include faz com que o texto contido na biblioteca especificada ser inserido no programa.

#include <stdio.h>

// int main(){} método principal.

int main() {

// Declaração de variáveis. 

         char Estado;
         char CodCarta [3];
         char Cidade  [20];
         int Populacao;
         float Area; 
         float DensidadePopulacional;
         float Pib;
         float PibPerCapito;
         int PontosTuristicos;




// printf mostra uma menssagem na tela pedindo ao usuário entrar com o dado. scanf pega esse dado e guarda na variável.

printf("**********************************************************************************\n"); 

   
 printf(" Cadastro\n "); 
 printf("\n"); 
   

 printf(" Digite a letra do  Estado: "); 
   scanf("%c%*c", &Estado);

   printf(" Digite o código da carta: "); 
   scanf("%s%*c", &CodCarta);

printf(" Digite o nome da Cidade: "); 
  scanf("%s%*c",Cidade);

  printf(" Digite a População da Cidade: "); 
   scanf("%d%*c", &Populacao);

printf(" Digite a área da Cidade: "); 
   scanf("%f%*c", &Area);

   printf(" Digite o PIB: "); 
   scanf("%f%*c", &Pib);

  printf(" Digite o o número de pontos turísticos da Cidade: "); 
   scanf("%d%*c", &PontosTuristicos);


 DensidadePopulacional = Populacao /  Area;

  PibPerCapito = Pib / Populacao;
 printf("\n"); 
 printf("\n"); 
// printf mostra a saida dos dados e sua formatação.
printf(" Estado: %c\n Codigo da Carta: %s\n Cidade: %s\n População: %d Pessoas \n Area: %.2f km²\n Densidade Populacional: %.3f Pessoas\n PIB: R$ %.2f\n PIB Per Capito: R$ %.2f\n Pontos Turísticos: %d\n ",  Estado, CodCarta,  Cidade, Populacao, Area, DensidadePopulacional, Pib, PibPerCapito,  PontosTuristicos  ); 

//Printf mosta a mensagem dados cadastrado com sucesso.

printf("\n"); 
printf("Dados cadastrados com sucesso.\n"); 
printf("**********************************************************************************\n"); 

//encerra a execução de uma função e retorna o controle para a função de chamada. 
    return 0;
}
