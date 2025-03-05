#include <stdio.h> // A diretiva #include faz com que o texto contido na biblioteca especificada ser inserido no programa.




int main() {   // Função principal.

    // Declaracoes de variaveis.

char carta1 = 1; char estado1; char codigo1[3]; char cidade1[20]; int populacao1; float area1; float pib1; int ponto_turistico1;
char carta1 = 2; char estado2; char codigo2[3]; char cidade2[20]; int populacao2; float area2; float pib2; int ponto_turistico2;

   // Entrada e armazenamento de dados.
    
    printf(">>>>>>>>>>SuperTrunfo<<<<<<<<<<");      
    printf(" ");   
    printf("*******Cadastro de cartas*******");   
    printf(" ");


    printf("Digite o nome do estado Estado:");   
    scanf("%c",estado1);

    printf("Digite o Codigo da carta:");   
    scanf("%s",codigo1);
   
    printf("Digite o nome da cidade:");   
    scanf("%s",cidade1);
   
    printf("Digite o numero populacional da cidade:");   
    scanf("%d",populacao1);
   
    printf("Digite a area da cidade:");   
    scanf("%f",area1);
   
    printf("Digite o PIB da cidade:");   
    scanf("%f",pib1);
   
    printf("Digite o numero de pontos turisticos da cidade:");   
    scanf("%d",ponto_turistico1);

    printf(" ");  
    printf("Carta 1 cadastrada com sucesso!");   
    printf("_______________________________ ");  
    
    printf("Digite o nome do estado Estado:");   
    scanf("%c",estado2);

    printf("Digite o Codigo da carta:");   
    scanf("%s",codigo2);
   
    printf("Digite o nome da cidade:");   
    scanf("%s",cidade2);
   
    printf("Digite o numero populacional da cidade:");   
    scanf("%d",populacao2);
   
    printf("Digite a area da cidade:");   
    scanf("%f",area2);
   
    printf("Digite o PIB da cidade:");   
    scanf("%f",pib2);
   
    printf("Digite o numero de pontos turisticos da cidade:");   
    scanf("%d",ponto_turistico2);


    printf(" ");  
    printf("Carta 2 cadastrada com sucesso!");   
    printf("_______________________________ ");
    printf("Fim...");  
   

return 0;

}

  

   







