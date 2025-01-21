// A diretiva #include faz com que o texto contido na biblioteca especificada ser inserido no programa.

#include <stdio.h>

// int main(){} método principal.

int main() {

// Declaração de variáveis. 

         char Estado1, CodCarta1 [3], CodCarta2 [3], Estado2,  Cidade1  [20], Cidade2 [20];
         int Populacao1, Populacao2, PontosTuristicos1, PontosTuristicos2;
         float Area1, Area2, DensidadePopulacional1, DensidadePopulacional2, Pib1, Pib2, PibPerCapito1, PibPerCapito2; 
         
         
// printf mostra uma menssagem na tela pedindo ao usuário entrar com o dado. scanf pega esse dado e guarda na variável.

printf("**********************************************************************************\n"); 

   
 printf(" Cadastro da Primeira Carta\n "); 
 printf("\n"); 
   

 printf(" Digite a letra do  Estado: "); 
   scanf("%c%*c", &Estado1);

   printf(" Digite o código da carta: "); 
   scanf("%s%*c", &CodCarta1);

printf(" Digite o nome da Cidade: "); 
  scanf("%s%*c",Cidade1);

  printf(" Digite a População da Cidade: "); 
   scanf("%d%*c", &Populacao1);

printf(" Digite a área da Cidade: "); 
   scanf("%f%*c", &Area1);

   printf(" Digite o PIB: "); 
   scanf("%f%*c", &Pib1);

  printf(" Digite o o número de pontos turísticos da Cidade:/n "); 
   scanf("%d%*c", &PontosTuristicos1);


printf(" Primeira Carta cadastrada com sucesso!\n "); 
printf("**********************************************************************************\n"); 
printf(" Cadastro da segunda Carta\n "); 
 printf("\n"); 
   

printf(" Digite a letra do  Estado: "); 
   scanf("%c%*c", &Estado2);

   printf(" Digite o código da carta: "); 
   scanf("%s%*c", &CodCarta2);

printf(" Digite o nome da Cidade: "); 
  scanf("%s%*c",Cidade2);

  printf(" Digite a População da Cidade: "); 
   scanf("%d%*c", &Populacao2);

printf(" Digite a área da Cidade: "); 
   scanf("%f%*c", &Area2);

   printf(" Digite o PIB: "); 
   scanf("%f%*c", &Pib2);

  printf(" Digite o o número de pontos turísticos da Cidade:/n "); 
   scanf("%d%*c", &PontosTuristicos2);

   printf(" Segunda  Carta cadastrada com sucesso!\n "); 
printf("**********************************************************************************\n"); 
printf("\n"); 

/*
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
    */
}
