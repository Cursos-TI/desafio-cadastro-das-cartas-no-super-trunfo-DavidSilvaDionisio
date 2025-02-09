#include <stdio.h> // A diretiva #include faz com que o texto contido na biblioteca especificada ser inserido no programa.


int main() {   // Função principal.

   //Declaração de variáveis.

   char Estado1, Cidade1 [20] , CodCarta1 [3], NomeJogador1 [20] ;
   int Populacao1, PontoTuristico1, Cont1;
   float Area1, DensidadePopulacional1 = 0, PIB_Percapito1 = 0, PIB1;

   char Estado2, CodCarta2 [3], Cidade2 [20], NomeJogador2 [20];
   int Populacao2, PontoTuristico2, Cont2;    
     float Area2, DensidadePopulacional2 = 0, PIB_Percapito2 = 0, PIB2; 

 // variavel de controle Switch-case. 

   int Num1, Cont3;

 // Inicialiacao de variaveis da estrutura encadeada  If-else do case 8.

   


printf(">>>>>>>>> Super trunfo. <<<<<<<<<\n");
printf("**********************************************************\n");

 // Entrada e amarzenamento de dados.

printf("Digite 1, para comparação de números de pessoas que residem na Cidade.\n");
printf("Digite 2, para comparação de Pontos turísticos.\n");
printf("Digite 3, para a comparação da área.\n");
printf("Digite 4, para comparação do PIB.\n");
printf("Digite 5, para comparação da Densidade Populacional.\n");
printf("Digite 6, para comparação PIB Percapito.\n");
printf("Digite 7, para Comparação de todos o itens.\n");
printf("Digite 8, para ver o manual do jogo.\n");
printf("Digite 9, sair.\n");
scanf("%d%*c", &Num1);


// Estrutura Condicional

   switch (Num1)
{

case 1:  // maior número de pessoas da cidade.
   
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
   

case 2:   // maior número de pontos turísticos.
   
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

case 3:   // maior área da cidade.
   
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

  if (Area1 > Area2){

printf("\n");  
printf("Parabéns %s, você Venceu!!\n", NomeJogador1);  
printf("\n");  
 
 }else if (Area1 < Area2){

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
 
case 4:   // maior PIB da cidade.
   
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
   
case 5:   // maior PIB Percapito da cidade.
   
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
  
case 6:   // Menor densidade populacional da cidade.

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
  
case 7:   // Comparando todos os itens.


// printf mostra uma menssagem na tela pedindo ao usuário entrar com o dado. scanf pega esse dado e guarda na variável.

printf("**********************************************************************************\n"); 

 printf("Digite o seu nome.\n"); 
 scanf("%s%*c", &NomeJogador1);
   
 printf("Cadastro da Primeira Carta\n"); 
 printf("\n"); 
   

 printf("Digite o nome do Estado:"); 
   scanf("%c%*c", &Estado1);

   printf("Digite o nome da Cidade:"); 
  scanf("%s%*c",Cidade1);


   printf("Digite o código da carta:"); 
   scanf("%s%*c", &CodCarta1);


  printf("Digite a População da Cidade:"); 
   scanf("%d%*c", &Populacao1);

printf("Digite a área da Cidade:"); 
   scanf("%f%*c", &Area1);

   printf("Digite o PIB:"); 
   scanf("%f%*c", &PIB1);

  printf("Digite o o número de pontos turísticos da Cidade:/n"); 
   scanf("%d%*c", &PontoTuristico1);

   


printf("Primeira Carta cadastrada com sucesso!\n"); 
printf("**********************************************************************************\n"); 
printf("Cadastro da segunda Carta\n"); 
 printf("\n"); 
   
printf("Digite o seu nome.\n"); 
 scanf("%s%*c", &NomeJogador2);

printf("Digite o nome do Estado:"); 
   scanf("%c%*c", &Estado2);

   printf("Digite o nome da Cidade:"); 
  scanf("%s%*c",Cidade2);

   printf("Digite o código da carta:"); 
   scanf("%s%*c", &CodCarta2);


printf("Digite a População da Cidade:"); 
   scanf("%d%*c", &Populacao2);

printf("Digite a área da Cidade:"); 
   scanf("%f%*c", &Area2);

   printf("Digite o PIB:"); 
   scanf("%f%*c", &PIB2);

  printf("Digite o o número de pontos turísticos da Cidade:"); 
   scanf("%d%*c", &PontoTuristico2);

   printf(" Segunda  Carta cadastrada com sucesso!\n "); 
printf("**********************************************************************************\n"); 
printf("\n"); 

DensidadePopulacional1 = Populacao1 /  Area1;
PIB_Percapito1 = PIB1 / Populacao1;
DensidadePopulacional2 = Populacao2 /  Area2;
PIB_Percapito2 = PIB2 / Populacao2;

 printf("\n"); 
 printf("\n"); 
// printf mostra a saida dos dados e sua formatação.
//printf(" Estado: %c\n Codigo da Carta: %s\n Cidade: %s\n População: %d Pessoas \n Area: %.2f km²\n Densidade Populacional: %.3f Pessoas\n PIB: R$ %.2f\n PIB Per Capito: R$ %.2f\n Pontos Turísticos: %d\n ",  Estado1, CodCarta1,  Cidade1, Populacao1, Area1, DensidadePopulacional1, PIB1, PIB_Percapito1,  PontoTuristico1); 


 printf("\n"); 
 printf("\n"); 
// printf mostra a saida dos dados e sua formatação.
//printf("Estado: %c\n Codigo da Carta: %s\n Cidade: %s\n População: %d Pessoas \n Area: %.2f km²\n Densidade Populacional: %.3f Pessoas\n PIB: R$ %.2f\n PIB Per Capito: R$ %.2f\n Pontos Turísticos: %d\n",  Estado2, CodCarta2,  Cidade2, Populacao2, Area2, DensidadePopulacional2, PIB2, PIB_Percapito2, PontoTuristico2); 

if(Populacao1 > Populacao2){

  Cont1++;

printf("\n");  
printf("População:\n", Populacao1);  
printf("\n");  
 
   }else if(Populacao1 < Populacao2){

  Cont2++;

printf("\n");  
printf("População:\n", Populacao2);  
printf("\n");  

  
   }else{
  
printf("\n");  
printf("%d, %d\n", Populacao1, DensidadePopulacional2);  
printf("\n"); 

}

if(PontoTuristico1 > PontoTuristico2){

   Cont1++;

printf("\n");  
printf("%d\n", PontoTuristico1);  
printf("\n");  
 
 }else if(PontoTuristico1 < PontoTuristico2){

   Cont2++;

printf("\n");  
printf("%d\n", PontoTuristico2);  
printf("\n"); 

 }else{

printf("\n");  
printf("%d, %d\n", PontoTuristico1, PontoTuristico2);  
printf("\n");  

}

if (Area1 > Area2){

   Cont1++;

printf("\n");  
printf("%d\n", Area1);  
printf("\n");  
 
 }else if (Area1 < Area2){

Cont2++;

printf("\n");  
printf("%d\n", Area2);  
printf("\n"); 

 }else{

printf("\n");  
printf("%f, %f,\n", Area1, Area2);  
printf("\n");  

}


 if(PIB1 > PIB2){

 Cont1++;

printf("\n");  
printf("%f\n", PIB1);  
printf("\n");  
 
 }else if(PIB1 < PIB2){

   Cont2++;

printf("\n");  
printf("\n", PIB2);  
printf("\n");  

 }else{

printf("\n");  
printf("%f\n", PIB1, PIB2);  
printf("\n"); 


if(PIB_Percapito1 > PIB_Percapito2){

   Cont1++;

printf("\n");  
printf("%f\n", PIB_Percapito1);  
printf("\n");  
 
 }else if(PIB_Percapito1 < PIB_Percapito2){

   Cont2++;

printf("\n");  
printf("%f\n", PIB_Percapito2);  
printf("\n");  

 }else{

printf("\n");  
printf("%f, %f\n", PIB_Percapito1, PIB_Percapito2);  
printf("\n"); 

}

if( DensidadePopulacional1 < DensidadePopulacional2){

   Cont1++;

printf("\n");  
printf("%f\n", DensidadePopulacional1);  
printf("\n");  
 
 }else if(DensidadePopulacional1 > DensidadePopulacional2){

   Cont2++;

printf("\n");  
printf("%f\n", DensidadePopulacional2);  
printf("\n");  

 }else{

printf("\n");  
printf("%f, %f\n", DensidadePopulacional1, DensidadePopulacional2);  
printf("\n"); 

}

if (Cont1 > Cont2)
{
  printf("%s!!!", NomeJogador1);
}
else if(Cont1 < Cont2)
{

printf("%s!!!", NomeJogador2);

}else{

printf("%s, %s Empate!!!", NomeJogador1, NomeJogador2);
 
}



//----------------------------------------------------------------------------------------------------------

case 8:  // Manual do jogo.

printf("Manual do jogo...\n");

  break;

//----------------------------------------------------------------------------------------------------------

case 9:  // Saindo do jogo.

printf("Saindo...");

  break;

default:  // Entrada de dados invalida.

printf("Opção invalidada.");

  break;
  
}

printf(">>>>>>>>> Super trunfo. <<<<<<<<<\n");
printf("**********************************************************\n");
printf("Fim do jogo.\n");

return 0;

}



  
   
//-------------------------------------------------------------------------------------------------------------------
   

   





