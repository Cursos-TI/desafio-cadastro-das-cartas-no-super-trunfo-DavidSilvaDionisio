#include <stdio.h>



int main() {

int populacao;
int NumPontosTuristicos;
float area; 
float pib;

 printf(" Digite o número da população: "); 
   scanf("%d%*c", &populacao);

printf(" Digite o número de pontos turísticos: "); 
   scanf("%d%*c", &NumPontosTuristicos);

printf(" Digite a área da Cidade: "); 
   scanf("%f%*c", &area);

printf(" Digite o PIB: "); 
   scanf("%f%*c", &pib);

printf(" População: %d\n Pontos turísticos: %d\n Área: %6.3fkm²\n PIB: %3.1f%\n ",populacao, NumPontosTuristicos, area, pib); 


    return 0;
}
