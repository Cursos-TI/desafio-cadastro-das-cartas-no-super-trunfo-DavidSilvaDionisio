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




// printf mostra menssagem na tela pedindo que o usuario entre com o dado. scanf pega esse dado e guarda na variável.

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
   scanf("%f%*c", &PontosTuristicos);


 DensidadePopulacional = Populacao /  Area;

 PibPerCapito = Pib / Populacao;

// printf mostra a saida dos dados e sua formatação.
printf(" Estado: %c\n Cidade: %c\n População: %d\n Area: %f\n  Densidade Populacional: %f\n  PIB: %f\n PIB Per Capito: %f\n Pontos Turísticos: %d\n ",  Estado,  Cidade, Populacao, Area, DensidadePopulacional, Pib, PibPerCapito,  PontosTuristicos  ); 

//Printf mosta a mensagem dados cadastrado com sucesso.
printf("Dados cadastrados com sucesso.\n"); 

//encerra a execução de uma função e retorna o controle para a função de chamada. 
    return 0;
}
