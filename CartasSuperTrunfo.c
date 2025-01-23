

#include <stdio.h> // A diretiva #include faz com que o texto contido na biblioteca especificada ser inserido no programa.


int main() {   // Método principal.

 //Declaração de variaveis de três cartas.
   char Estado1, Cidade1 [20] , CodCarta1 [3] ;
   int Populacao1, PontoTuristico1;
   float Area1, PIB1;

   char Estado2, CodCarta2 [3], Cidade2 [20];
   int Populacao2, PontosTuristicos2;    
   float  Area2, PIB2; 

   char Estado3, CodCarta3 [3], Cidade3 [20];
   int Populacao3, PontosTuristicos3;    
   float  Area3, PIB3; 

printf(" **********************************\n ");
printf(" Jogo iniciado.\n ");
printf(" **********************************\n ");
printf(" \n ");

printf(" Digite o nome do Estado. ");  
scanf ("%c%*c", &Estado1);

printf(" Digite o código da cidade. ");  
scanf ("%s%*c", &CodCarta1);


printf(" Digite o nome da Cidade. ");  
scanf ("%s%*c", &Cidade1);


printf(" Digite o números populacional da cidade. ");  
scanf (" %d%*c ", &Populacao1);

printf(" Digite o número de pontos turísticos da cidade. ");  
scanf ("%d%*c", &PontoTuristico1);

printf( " Digite a área da cidade. ");  
scanf ("%f%*c", &Area1);

printf(" Digite O PIB da Cidade. ");  
scanf ("%f%*c", &PIB1);



   return 0;
    
}
