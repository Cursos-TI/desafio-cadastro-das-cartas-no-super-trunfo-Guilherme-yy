#include <stdio.h>
int main(){

char estado1 [30], estado2[30]; 
char codigo1[10], codigo2[10];
char cidade1[30], cidade2[30];
int populacao1, populacao2;
int pontos_turisticos1, pontos_turisticos2;
float PIB1, PIB2;
float area1, area2;

// primeira carta 

  printf("digite o primeiro estado:\n");
  scanf(" %s", estado1);

  printf("digite o codigo do primeiro estado:\n ");
  scanf(" %s", codigo1);

  printf("digite o nome da capital do primeiro estado:\n");
  scanf(" %s", cidade1);

  printf("digite o valor da população com numero inteiro(sem o uso de vírgula e espaço) do primeiro estado:\n ");
  scanf(" %d", &populacao1);  //porque pedi para não usar vírgula e espaço? porque o uso do scanf() da erro no terminal
  //pois o certo seria usar o fflush(stdin) ou getchar() caso coleque virgula/espaço o terminal vai pular todas as outras perguntas da primeira carta e começar a da segunda carta
  
  
  printf("digite o valor do PIB do primeiro estado:\n");
  scanf("%f", &PIB1);

  printf("digite quantos km² tem seu primeiro estado\n ");
  scanf("%f", &area1);

  printf("digite quantos pontos turisticos existem no primeiro estado:\n");
  scanf("%d", &pontos_turisticos1);

//segunda carta

  printf("digite o segundo estado:\n");
  scanf(" %s", estado2);

  printf("digite o codigo do segundo estado:\n ");
  scanf(" %s", codigo2);

  printf("digite o nome da capital do segundo estado:\n");
  scanf(" %s", cidade2);

  printf("digite o valor da população com numero inteiro(sem o uso de vírgula e espaço) do segundo estado:\n ");
  scanf(" %d", &populacao2 );
  
  printf("digite o valor do PIB do segundo estado:\n");
  scanf("%f", &PIB2);

  printf("digite quantos km² tem seu segundo estado:\n ");
  scanf("%f", &area2);

  printf("digite quantos pontos turisticos existem no segundo estado:\n");
  scanf("%d", &pontos_turisticos2);


 return 0;
}

