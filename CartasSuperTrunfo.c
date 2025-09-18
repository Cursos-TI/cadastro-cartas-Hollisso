#include <stdio.h>

int main() {
// ---- CARTA 1 ----
// VARIAVEIS
  char codigo1[10];
  float populacao1;
  float area1;
  float PIB1;
  int pontos_turisticos1;
  
// INPUT DE DADOS
  printf("--- Cadastro da carta 01 --- \n\n"); 
  printf("- Código da sua carta: ");
  scanf("%s", codigo1);
 
  printf("- Quantidade da população da sua carta: ");
  scanf("%f", &populacao1);
 
  printf("- Tamanho da área da sua carta: ");
  scanf("%d", &area1);
  
  printf("- Valor do PIB da sua carta: ");
  scanf("%f", &PIB1);

  printf("- Quantidade de pontos turisticos da sua carta: ");
  scanf("%d", &pontos_turisticos1);

//Pular linha
  printf("\n");

//---- CARTA 02 ----
// VARIAVEIS
  char codigo2[10];
  int populacao2;
  float area2;
  float PIB2;
  int pontos_turisticos2;

  // INPUT DE DADOS
  printf("--- Cadastro da carta 02 --- \n\n"); 
  printf("- Código da sua carta: ");
  scanf("%s", codigo2);
 
  printf("- Quantidade da população da sua carta: ");
  scanf("%f", &populacao2);
 
  printf("- Tamanho da área da sua carta: ");
  scanf("%d", &area2);
  
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
  printf("População: %d\n", pontos_turisticos1);
  printf("Área: %d\n", area1);
  printf("PIB: %d\n", PIB1);
  printf("Pontos Turisticos: %d\n\n", pontos_turisticos1);

//DADOS CARTA 2
  printf("==== Carta 02 ====\n");
  printf("Código: %s\n", codigo2);
  printf("População: %d\n", populacao2);
  printf("Área: %d\n", area2);
  printf("PIB: %d\n", PIB2);
  printf("Pontos Turisticos: %d\n\n", pontos_turisticos2);

  printf("||  Parabéns, cartas cadastradas com sucesso!  ||");

return 0;
} 
