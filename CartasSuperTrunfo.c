#include <stdio.h>

int main() {
// VARIAVEIS
  char estado1[10], estado2[10];  
  char codigo1[10], codigo2[10];
  char cidade1[20], cidade2[10];
  float populacao1, populacao2;
  float area1, area2;
  float PIB1, PIB2;
  int pontos_turisticos1, pontos_turisticos2;
  float densidade_populacional1, densidade_populacional2;
  float PIB_per_capita1, PIB_per_capita2;

//----- Carta 01 ----
// INPUT DE DADOS
  printf("--- Cadastro da carta 01 --- \n\n"); 
  printf("- Estado da sua carta: ");
  scanf("%s", estado1);
  
  printf("- Código da sua carta: ");
  scanf("%s", codigo1);

  printf("- Cidade: ");
  scanf("%s", cidade1);
 
  printf("- População da sua carta: ");
  scanf("%f", &populacao1);
 
  printf("- Tamanho da área em km² da sua carta: ");
  scanf("%f", &area1);
  
  printf("- Valor do PIB da sua carta: ");
  scanf("%f", &PIB1);

  printf("- Quantidade de pontos turísticos da sua carta: ");
  scanf("%d", &pontos_turisticos1);

//Pular linha
  printf("\n");

//---- CARTA 02 ----
// INPUT DE DADOS
  printf("--- Cadastro da carta 02 --- \n\n"); 
  printf("- Estado da sua carta: ");
  scanf("%s", estado2);
  
  printf("- Código da sua carta: ");
  scanf("%s", codigo2);

  printf("- Cidade: ");
  scanf("%s", cidade2);
 
  printf("- População da sua carta: ");
  scanf("%f", &populacao2);
 
  printf("- Tamanho da área em Km² da sua carta: ");
  scanf("%f", &area2);
  
  printf("- Valor do PIB da sua carta: ");
  scanf("%f", &PIB2);

  printf("- Quantidade de pontos turísticos da sua carta: ");
  scanf("%d", &pontos_turisticos2);

//calculo de densidade populaciona
  densidade_populacional1 = populacao1 / area1;
  densidade_populacional2 = populacao2 / area2;

//calculo de PIB per Capita
  PIB_per_capita1 = PIB1 / populacao1;
  PIB_per_capita2 = PIB2 / populacao2;

//Pular linha
  printf("\n");


// Área para exibição dos dados da cidade
//DADOS CARTA 1
  printf("==== Carta 01 ====\n");
  printf("Estado: %s\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %.2f\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais \n", PIB1);
  printf("Pontos Turísticos: %d\n", pontos_turisticos1);
  printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional1);
  printf("PIB per Capita: %.2f reais \n\n", PIB_per_capita1);

//DADOS CARTA 2
  printf("==== Carta 02 ====\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %.2f\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais \n", PIB2);
  printf("Pontos Turísticos: %d\n", pontos_turisticos2);
  printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional2);
  printf("PIB per Capita: %.2f reais \n\n", PIB_per_capita2);

  printf("||  Parabéns, cartas cadastradas com sucesso!  ||\n\n");

return 0;
} 
