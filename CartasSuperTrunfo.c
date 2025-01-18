// A diretiva #include faz com que o texto contido na biblioteca especificada ser inserido no programa.

#include <stdio.h>

// int main(){} método principal.

int main() {

// Declaração de variáveis.
int populacao;
int NumPontosTuristicos;
float area; 
float pib;

// printf mostra menssagem na tela pedindo que o usuario entre com o dado. scanf pega esse dado e guarda na variável.
 printf(" Digite o número da população: "); 
   scanf("%d%*c", &populacao);

printf(" Digite o número de pontos turísticos: "); 
   scanf("%d%*c", &NumPontosTuristicos);

printf(" Digite a área da Cidade: "); 
   scanf("%f%*c", &area);

printf(" Digite o PIB:"); 
   scanf("%f%*c", &pib);

// printf mostra a saida dos dados e sua formatação.
printf(" População: %d\n Pontos turísticos: %d\n Área: %6.3fkm²\n PIB: %3.1f%\n ",populacao, NumPontosTuristicos, area, pib); 

//Printf mosta a mensagem dados cadastrado com sucesso.
printf("Dados cadastrados com sucesso.\n"); 

//encerra a execução de uma função e retorna o controle para a função de chamada. 
    return 0;
}
