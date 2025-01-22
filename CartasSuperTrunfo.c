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

   
 printf(" Primeira carta, inicie o jogo! \n "); 
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

  printf(" Digite o o número de pontos turísticos da Cidade: "); 
   scanf("%d%*c", &PontosTuristicos1);

printf(" \n "); 
printf(" Dados  coletados com sucesso \n "); 
printf(" \n "); 
printf("**********************************************************************************\n"); 
printf(" \n "); 
printf(" Segunda Carta, sua vez!\n "); 
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


printf("\n"); 
printf(" Dados coletados com sucesso!\n "); 
printf("\n"); 
printf("**********************************************************************************\n"); 
printf("\n"); 
DensidadePopulacional1 = Populacao1 /  Area1;

PibPerCapito1 = Pib1 / Populacao1;


DensidadePopulacional2 = Populacao2 /  Area2;

PibPerCapito2 = Pib2 / Populacao2;

if (PibPerCapito1 > PibPerCapito2)
{
 printf("Carta Vencedora > %s\n ",CodCarta1);

 printf(" \n ");
   
}else{

printf("Carta Vencedora > %s\n ",CodCarta2);

printf(" \n ");

}

return 0;
    
}
