#include <stdio.h> // A diretiva #include faz com que o texto contido na biblioteca especificada ser inserido no programa.


int main() {   // Função principal.

   //Declaração de variáveis.

   char Estado1, Cidade1 [20] , CodCarta1 [3], NomeJogador1 [20] ;
   int Populacao1, PontoTuristico1, Ponto1;
   float Area1, DensidadePopulacional1, PIB_Percapito1, PIB1;

   char Estado2, CodCarta2 [3], Cidade2 [20], NomeJogador2 [20];
   int Populacao2, PontoTuristico2, Ponto2;    
   float  Area2, DensidadePopulacional2, PIB_Percapito2, PIB2; 

 // variavel de controle.

   int Num1;

 // Inicialiacao de variaveis.

   Ponto1 = 0;
   Ponto2 = 0;


printf(">>>>>>>>> Super trunfo. <<<<<<<<<\n");
printf("**********************************************************\n");

 // Entrada e amarzenamento de dados.

printf("Digite 1, para comparação de números de pessoas que residem na Cidade.\n");
printf("Digite 2, para comparação de Pontos turísticos.\n");
printf("Digite 3, para a comparação da área.\n");
printf("Digite 4, para comparação do PIB.\n");
printf("Digite 5, para comparação PIB Percapito.\n");
printf("Digite 6, para comparação da Densidade Populacional.\n");
printf("Digite 7, para Comparação de todos o itens.\n");
printf("Digite 8, sair.\n");
scanf("%d%*c", &Num1);


// Estrutura Condicional

   switch (Num1)
{

case 1:
   
printf("Jogador 1, digite o seu nome:"); 
scanf("%s%*c", &NomeJogador1);
printf("\n" );
printf("Entre com os dados da primeira carta.\n");;  
printf("\n" );  

printf("Digite o nome do Estado.\n");  
scanf ("%c%*c", &Estado1);

printf("Digite o nome da Cidade.\n");  
scanf ("%s%*c", &Cidade1);

printf("Digite o código da cidade.\n");  
scanf ("%s%*c", &CodCarta1);

printf("Digite o número de pessoas que moram na Cidade.\n");  
scanf ("%d%*c", &Populacao1);

printf(" Jogador 2, digite o seu nome: "); 
scanf("%s%*c", &NomeJogador2);
printf("\n" );
printf("Entre com os dados da segunda carta.\n");;  
printf("\n" );  

printf("Digite o nome do Estado.\n");  
scanf ("%c%*c", &Estado2);

printf("Digite o nome da Cidade.\n");  
scanf ("%s%*c", &Cidade2);

printf("Digite codigo da Cidade.\n");  
scanf ("%s%*c", &CodCarta2);

printf("Digite o número de pessoas que moram na Cidade.\n");  
scanf ("%d%*c", &Populacao2);

   if(Populacao1 > Populacao2){

printf("\n");  
printf("Parabéns %s, você Venceu!!\n", NomeJogador1);  
printf("\n");  
 
   }else if(Populacao1 < Populacao2){

printf("\n");  
printf("Parabéns %s, você Venceu!!\n", NomeJogador2);  
printf("\n");
  
   }else{

printf("\n");  
printf("Parabéns %s e %s, vocês Empataram!!\n", NomeJogador1, NomeJogador2);  
printf("\n"); 

}

   break;

//----------------------------------------------------------------------------------------------------------
   

case 2:
   
printf("Jogador 1, digite o seu nome:"); 
scanf("%s%*c", &NomeJogador1);
printf("\n" );
printf("Entre com os dados da primeira carta.\n");;  
printf("\n" );  

printf("Digite o nome do Estado.\n");  
scanf ("%c%*c", &Estado1);

printf("Digite o nome da Cidade.\n");  
scanf ("%s%*c", &Cidade1);

printf("Digite o código da cidade.\n");  
scanf ("%s%*c", &CodCarta1);

printf("Digite o número de pontos turísticos da cidade.\n");  
scanf ("%d%*c", &PontoTuristico1);

printf("Jogador 2, digite o seu nome:"); 
scanf("%s%*c", &NomeJogador2);
printf("\n" );
printf("Entre com os dados da segunda carta.\n");;  
printf("\n" );  

printf("Digite o nome do Estado.\n");  
scanf ("%c%*c", &Estado2);

printf("Digite o nome da Cidade.\n");  
scanf ("%s%*c", &Cidade2);

printf("Digite o código da cidade.\n");  
scanf ("%s%*c", &CodCarta2);

printf("Digite o número de pontos turísticos da cidade.\n");  
scanf ("%d%*c", &PontoTuristico2);

  if(PontoTuristico1 > PontoTuristico2){

printf("\n");  
printf("Parabéns %s, você Venceu!!\n", NomeJogador1);  
printf("\n");  
 
 }else if(PontoTuristico1 < PontoTuristico2){

printf("\n");  
printf("Parabéns %s, você Venceu!!\n", NomeJogador2);  
printf("\n"); 

 }else{

printf("\n");  
printf("Parabéns %s e %s, vocês Empataram!!\n", NomeJogador1, NomeJogador2);  
printf("\n");  

}

  break;

//----------------------------------------------------------------------------------------------------------

case 3:
   
printf("Jogador 1, digite o seu nome:"); 
scanf("%s%*c", &NomeJogador1);
printf("\n" );
printf("Entre com os dados da primeira carta.\n");;  
printf("\n" );  

printf("Digite o nome do Estado.\n");  
scanf ("%c%*c", &Estado1);

printf("Digite o nome da Cidade.\n");  
scanf ("%s%*c", &Cidade1);

printf("Digite o código da cidade.\n");  
scanf ("%s%*c", &CodCarta1);

printf("Digite a área da cidade.\n");  
scanf ("%f%*c", &Area1);

printf("Jogador 2, digite o seu nome:"); 
scanf("%s%*c", &NomeJogador2);
printf("\n" );
printf("Entre com os dados da segunda carta.\n");;  
printf("\n" );  

printf("Digite o nome do Estado.\n");  
scanf ("%c%*c", &Estado2);

printf("Digite o nome da Cidade.\n");  
scanf ("%s%*c", &Cidade2);

printf("Digite o código da cidade.\n");  
scanf ("%s%*c", &CodCarta2);

printf("Digite a área da cidade.\n");  
scanf ("%f%*c", &Area2);

  if(Area1 > Area2){

printf("\n");  
printf("Parabéns %s, você Venceu!!\n", NomeJogador1);  
printf("\n");  
 
 }else if(Area1 < Area2){

printf("\n");  
printf("Parabéns %s, você Venceu!!\n", NomeJogador2);  
printf("\n"); 

 }else{

printf("\n");  
printf("Parabéns %s e %s, vocês Empataram!!\n", NomeJogador1, NomeJogador2);  
printf("\n");  

}

  break;

//----------------------------------------------------------------------------------------------------------
 
case 4:
   
printf("Jogador 1, digite o seu nome:"); 
scanf("%s%*c", &NomeJogador1);
printf("\n" );
printf("Entre com os dados da primeira carta.\n");;  
printf("\n" );  

printf("Digite o nome do Estado.\n");  
scanf ("%c%*c", &Estado1);

printf("Digite o nome da Cidade.\n");  
scanf ("%s%*c", &Cidade1);

printf("Digite o código da cidade.\n");  
scanf ("%s%*c", &CodCarta1);

printf("Digite o PIB  da Cidade.\n");  
scanf ("%f%*c", &PIB1);

printf("Jogador 2, digite o seu nome:"); 
scanf("%s%*c", &NomeJogador2);
printf("\n" );
printf("Entre com os dados da segunda carta.\n");;  
printf("\n" );  

printf("Digite o nome do Estado.\n");  
scanf ("%c%*c", &Estado2);

printf("Digite o nome da Cidade.\n");  
scanf ("%s%*c", &Cidade2);

printf("Digite o código da cidade.\n");  
scanf ("%s%*c", &CodCarta2);

printf("Digite o PIB da Cidade.\n");  
scanf ("%f%*c", &PIB2);

  if(PIB1 > PIB2){

printf("\n");  
printf("Parabéns %s, você Venceu!!\n", NomeJogador1);  
printf("\n");  
 
 }else if(PIB1 < PIB2){

printf("\n");  
printf("Parabéns %s, você Venceu!!\n", NomeJogador2);  
printf("\n");  

 }else{

printf("\n");  
printf("Parabéns %s e %s, vocês Empataram!!\n", NomeJogador1, NomeJogador2);  
printf("\n"); 

}

  break;

//----------------------------------------------------------------------------------------------------------
   
case 5:
   
printf("Jogador 1, digite o seu nome:"); 
scanf("%s%*c", &NomeJogador1);
printf("\n" );
printf("Entre com os dados da primeira carta.\n");;  
printf("\n" );  

printf("Digite o nome do Estado.\n");  
scanf ("%c%*c", &Estado1);

printf("Digite o nome da Cidade.\n");  
scanf ("%s%*c", &Cidade1);

printf("Digite o código da cidade.\n");  
scanf ("%s%*c", &CodCarta1);

printf("Digite o PIB Percapito.\n");  
scanf ("%f%*c", &PIB_Percapito1);

printf("Jogador 2, digite o seu nome:"); 
scanf("%s%*c", &NomeJogador2);
printf("\n" );
printf("Entre com os dados da segunda carta.\n");;  
printf("\n" );  

printf("Digite o nome do Estado.\n");  
scanf ("%c%*c", &Estado2);

printf("Digite o nome da Cidade.\n");  
scanf ("%s%*c", &Cidade2);

printf("Digite o código da cidade.\n");  
scanf ("%s%*c", &CodCarta2);

printf("Digite o PIB Percapito\n");  
scanf ("%f%*c", & PIB_Percapito2);

  if(  PIB_Percapito1 >  PIB_Percapito2){

printf("\n");  
printf("Parabéns %s, você Venceu!!\n", NomeJogador1);  
printf("\n");  
 
 }else if( PIB_Percapito1 <  PIB_Percapito2){

printf("\n");  
printf("Parabéns %s, você Venceu!!\n", NomeJogador2);  
printf("\n"); 

 }else{

printf("\n");  
printf("Parabéns %s e %s, vocês Empataram!!\n", NomeJogador1, NomeJogador2);  
printf("\n"); 

}

  break;

//----------------------------------------------------------------------------------------------------------
  
case 6:

printf(" Jogador 1, digite o seu nome: "); 
scanf("%s%*c", &NomeJogador1);
printf("\n" );
printf("Entre com os dados da primeira carta.\n");;  
printf("\n" );  

printf("Digite o nome do Estado.\n");  
scanf ("%c%*c", &Estado1);

printf("Digite o nome da Cidade.\n");  
scanf ("%s%*c", &Cidade1);

printf("Digite o código da cidade.\n");  
scanf ("%s%*c", &CodCarta1);

printf("Digite a Densidade Populacional.\n");  
scanf ("%f%*c", &DensidadePopulacional1);

printf("Jogador 2, digite o seu nome:"); 
scanf("%s%*c", &NomeJogador2);
printf("\n" );
printf("Entre com os dados da segunda carta.\n");;  
printf("\n" );  

printf("Digite o nome do Estado.\n");  
scanf ("%c%*c", &Estado2);

printf("Digite o nome da Cidade.\n");  
scanf ("%s%*c", &Cidade2);

printf("Digite o código da cidade.\n");  
scanf ("%s%*c", &CodCarta2);

printf("Digite a Densidade populacional.\n");  
scanf ("%f%*c", &DensidadePopulacional2);  


  if(DensidadePopulacional1 < DensidadePopulacional2){

printf("\n");  
printf("Parabéns %s, você Venceu!!\n", NomeJogador1);  
printf("\n");  
 
 }else if( DensidadePopulacional1 >  DensidadePopulacional2){

printf("\n");  
printf("Parabéns %s, você Venceu!!\n", NomeJogador2);  
printf("\n");  

 }else{

printf("\n");  
printf("Parabéns %s e %s, vocês Empataram!!\n", NomeJogador1, NomeJogador2);  
printf("\n"); 

}

  break;

//----------------------------------------------------------------------------------------------------------
  
case 7:

printf("Jogador 1, digite o seu nome:"); 
scanf("%s%*c", &NomeJogador1);
printf("\n" );
printf("Entre com os dados da primeira carta.\n");;  
printf("\n" );  

printf("Digite o nome do Estado.\n");  
scanf ("%c%*c", &Estado1);

printf("Digite o nome da Cidade.\n");  
scanf ("%s%*c", &Cidade1);

printf("Digite o código da cidade.\n");  
scanf ("%s%*c", &CodCarta1);

printf("Digite o número de pessoas que residem na Cidade.\n");  
scanf ("%d%*c", &Populacao1);

printf("Digite o número de pontos turísticos da cidade.\n");  
scanf ("%d%*c", &PontoTuristico1);

printf("Digite a área da cidade.\n");  
scanf ("%f%*c", &Area1);

printf("Digite O PIB da Cidade.\n");  
scanf ("%f%*c", &PIB1);

//tratamento de dados.

  PIB_Percapito1 = PIB1 / Populacao1;
  DensidadePopulacional1 = Populacao1 / Area1;

printf("\n"); 
printf(">>>>>>>>>  Super Trunfo. <<<<<<<<<\n");
printf("**********************************************************\n");
printf("\n"); 

//Entrada e amarzenamento de dados.

printf("Jogador 2, digite o seu nome:"); 
scanf("%s%*c", &NomeJogador2);
printf("\n" );
printf("Entre com os dados da segunda carta.\n");;  
printf("\n" );  

printf("Digite o nome do Estado.\n");  
scanf ("%c%*c", &Estado2);

printf("Digite o nome da Cidade.\n");  
scanf ("%s%*c", &Cidade2);

printf("Digite o código da cidade.\n");  
scanf ("%s%*c", &CodCarta2);

printf("Digite o número de pessoas que residem na Cidade.\n");  
scanf ("%d%*c", &Populacao2);

printf("Digite o número de pontos turísticos da cidade.\n");  
scanf ("%d%*c", &PontoTuristico2);

printf( "Digite a área da cidade.\n");  
scanf ("%f%*c", &Area2);

printf("Digite O PIB da Cidade.\n");  
scanf ("%f%*c", &PIB2);
printf("\n");  

  //tratamento de dados.

  PIB_Percapito1 = PIB2 / Populacao2;
  DensidadePopulacional2 = Populacao2 / Area2;

// função para a comparação das cartas e saída de dados.

  if(Populacao1 > Populacao2){

   Ponto1 = Ponto1++;
printf("Carta %s venceu.\n", CodCarta1); 
   
  }else{

   Ponto2 = Ponto2++;

printf("Carta %s venceu.\n", CodCarta2);
    
}

  if(PontoTuristico1 > PontoTuristico2){

    Ponto1 = Ponto1++;
printf("Carta %s venceu.\n", CodCarta1); 
 
  }else{

   Ponto2 = Ponto2++;
printf("Carta %s venceu.\n", CodCarta2);
   
}

  if( Area2 >  Area2){

    Ponto1 = Ponto1++;
printf("Carta %s venceu.\n", CodCarta1);  
  
  }else{

   Ponto2 = Ponto2++;
printf("Carta %s venceu.\n", CodCarta2);

}

  if(DensidadePopulacional1 < DensidadePopulacional2){

    Ponto1 = Ponto1++;
printf("Carta %s venceu.\n", CodCarta1);  
printf("\n");

  }else{

   Ponto2 = Ponto2++;
printf("Carta %s venceu.\n", CodCarta2);

}

  if(PIB1 > PIB2){

   Ponto1 = Ponto1++;
printf("Carta %s venceu.\n", CodCarta1);  
 
 }else{

   Ponto2 = Ponto2++;
printf("Carta %s venceu.\n", CodCarta2);
 
}

  if(Ponto1 > Ponto2){

printf("\n");  
printf("Parabéns %s, você Venceu!!\n", NomeJogador1);  
printf("\n");  
 
 }else{

printf("\n"); 
printf("Parabéns %s, você Ganhou o jogo!\n", NomeJogador2);  
printf("\n");

  break;

//----------------------------------------------------------------------------------------------------------

case 8:

printf("Saindo...");

  break;

default:

printf("Opção invalidada.");

  break;
  
}

printf(">>>>>>>>> Super trunfo. <<<<<<<<<\n");
printf("**********************************************************\n");
printf("Fim do jogo.\n");

}

return 0;

  }
   
//-------------------------------------------------------------------------------------------------------------------
   

   





