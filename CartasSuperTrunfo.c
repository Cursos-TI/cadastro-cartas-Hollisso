#include <stdio.h>

int main() {
// ---- CARTA 1 ----
// VARIAVEIS
  char codigo1[10];
  char cidade1[20];
  float populacao1;
  float area1;
  float PIB1;
  int pontos_turisticos1;
  
// INPUT DE DADOS
  printf("--- Cadastro da carta 01 --- \n\n"); 
  printf("- Código da sua carta: ");
  scanf("%s", codigo1);

  printf("- Qual a sua cidade: ");
  scanf("%s", cidade1);
 
  printf("- Quantidade da população da sua carta: ");
  scanf("%f", &populacao1);
 
  printf("- Tamanho da área da sua carta: ");
  scanf("%f", &area1);
  
  printf("- Valor do PIB da sua carta: ");
  scanf("%f", &PIB1);

  printf("- Quantidade de pontos turisticos da sua carta: ");
  scanf("%d", &pontos_turisticos1);

//Pular linha
  printf("\n");

//---- CARTA 02 ----
// VARIAVEIS
  char codigo2[10];
  char cidade2[20];
  float populacao2;
  float area2;
  float PIB2;
  int pontos_turisticos2;

  // INPUT DE DADOS
  printf("--- Cadastro da carta 02 --- \n\n"); 
  printf("- Código da sua carta: ");
  scanf("%s", codigo2);

  printf("- Qual a sua cidade: ");
  scanf("%s", cidade2);
 
  printf("- Quantidade da população da sua carta: ");
  scanf("%f", &populacao2);
 
  printf("- Tamanho da área da sua carta: ");
  scanf("%f", &area2);
  
  printf("- Valor do PIB da sua carta: ");
  scanf("%f", &PIB2);

  printf("- Quantidade de pontos turisticos da sua carta: ");
  scanf("%d", &pontos_turisticos2);

//Pular linha
  printf("\n");


// Área para exibição dos dados da cidade
//DADOS CARTA 1
  printf("==== Carta 01 ====\n");
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %f\n", pontos_turisticos1);
  printf("Área: %f\n", area1);
  printf("PIB: %f\n", PIB1);
  printf("Pontos Turisticos: %d\n\n", pontos_turisticos1);

//DADOS CARTA 2
  printf("==== Carta 02 ====\n");
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %f\n", populacao2);
  printf("Área: %f\n", area2);
  printf("PIB: %f\n", PIB2);
  printf("Pontos Turisticos: %d\n\n", pontos_turisticos2);

  printf("||  Parabéns, cartas cadastradas com sucesso!  ||\n\n");

return 0;
} 
