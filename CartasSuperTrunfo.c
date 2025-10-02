#include <stdio.h>

int main() {

// VARIAVEIS
  char estado1[10], estado2[10];  
  char codigo1[10], codigo2[10];
  char cidade1[20], cidade2[10];
  unsigned long int populacao1, populacao2;
  float area1, area2;
  float PIB1, PIB2;
  int pontos_turisticos1, pontos_turisticos2;
  float densidade_populacional1, densidade_populacional2;
  float PIB_per_capita1, PIB_per_capita2;
  float super_poder1, super_poder2;
  int atributo;

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
  scanf("%u", &populacao1);
 
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
  scanf("%u", &populacao2);
 
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

//calculo do super poder
  super_poder1 = populacao1 + area1 + PIB1 + pontos_turisticos1 + PIB_per_capita1 - densidade_populacional1;
  super_poder2 = populacao2 + area2 + PIB2 + pontos_turisticos2 + PIB_per_capita2 - densidade_populacional2;

//Pular linha
  printf("\n");

//Seleção do atributo
  printf("*** Escolha o atributo de comparação:***\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Pontos turisticos\n");
  printf("5. Densidade populacional\n");
  printf("6. PIB per Capita\n");
  printf("7. Super Poder\n");
  printf("Escolha seu atributo: ");
  scanf("%d", &atributo);

  printf("\n");

  switch (atributo)
  {
  case 1:
    if ( populacao1 > populacao2) {
      printf("Estado: %s\n", cidade1);
      printf("Atributo: População\n");
      printf("Carta 1: %u VS Carta 2: %u\n", populacao1, populacao2);
      printf("### Carta 1 venceu! ###\n\n");
    
    } else if ( populacao1 < populacao2) {
      printf("Estado: %s\n", cidade2);
      printf("Atributo: População\n");
      printf("Carta 1: %u VS Carta 2: %u\n", populacao1, populacao2);
      printf("### Carta 2 venceu! ###\n\n");
      
    } else {
      printf("*** EMPATE! ***\n");

    } break;

  case 2:
    if ( area1 > area2) {
      printf("Estado: %s\n", cidade1);
      printf("Atributo: Área\n");
      printf("Carta 1: %u VS Carta 2: %u\n", area1, area2);
      printf("### Carta 1 venceu! ###\n\n");
    
    } else if ( area1 < area2) {
      printf("Estado: %s\n", cidade2);
      printf("Atributo: Área\n");
      printf("Carta 1: %f VS Carta 2: %f\n", area1, area2);
      printf("### Carta 2 venceu! ###\n\n");
      
    } else {
      printf("*** EMPATE! ***\n");
      
    } break;

  case 3:
    if ( PIB1 > PIB2) {
      printf("Estado: %s\n", cidade1);
      printf("Atributo: PIB\n");
      printf("Carta 1: %f VS Carta 2: %f\n", PIB1, PIB2);
      printf("### Carta 1 venceu! ###\n\n");
    
    } else if ( PIB1 < PIB2) {
      printf("Estado: %s\n", cidade2);
      printf("Atributo: PIB\n");
      printf("Carta 1: %f VS Carta 2: %f\n", PIB1, PIB2);
      printf("### Carta 2 venceu! ###\n\n");
      
    } else {
      printf("*** EMPATE! ***\n");
      
    } break;

  case 4:
    if ( pontos_turisticos1 > pontos_turisticos2) {
      printf("Estado: %s\n", cidade1);
      printf("Atributo: Pontos Turísticos\n");
      printf("Carta 1: %d VS Carta 2: %d\n", pontos_turisticos1, pontos_turisticos2);
      printf("### Carta 1 venceu! ###\n\n");
    
    } else if ( pontos_turisticos1 < pontos_turisticos2) {
      printf("Estado: %s\n", cidade2);
      printf("Atributo: Pontos Turísticos\n");
      printf("Carta 1: %d VS Carta 2: %d\n", pontos_turisticos1, pontos_turisticos2);
      printf("### Carta 2 venceu! ###\n\n");
      
    } else {
      printf("*** EMPATE! ***\n");
      
    } break;

  case 5:
    if ( densidade_populacional1 > densidade_populacional2) {
      printf("Estado: %s\n", cidade1);
      printf("Atributo: Densidade Populacional\n");
      printf("Carta 1: %f VS Carta 2: %f\n", densidade_populacional1, densidade_populacional2);
      printf("### Carta 1 venceu! ###\n\n");
    
    } else if ( densidade_populacional1 < densidade_populacional2) {
      printf("Estado: %s\n", cidade2);
      printf("Atributo: Densidade Populacional\n");
      printf("Carta 1: %f VS Carta 2: %f\n", densidade_populacional1, densidade_populacional2);
      printf("### Carta 2 venceu! ###\n\n");
      
    } else {
      printf("*** EMPATE! ***\n");
      
    } break;

  case 6:
    if ( PIB_per_capita1 > PIB_per_capita2) {
      printf("Estado: %s\n", cidade1);
      printf("Atributo: PIB per Capita\n");
      printf("Carta 1: %f VS Carta 2: %f\n", PIB_per_capita1, PIB_per_capita2);
      printf("### Carta 1 venceu! ###\n\n");
    
    } else if ( PIB_per_capita1 < PIB_per_capita2) {
      printf("Estado: %s\n", cidade2);
      printf("Atributo: PIB per Capita\n");
      printf("Carta 1: %f VS Carta 2: %f\n", PIB_per_capita1, PIB_per_capita2);
      printf("### Carta 2 venceu! ###\n\n");
      
    } else {
      printf("*** EMPATE! ***\n");
      
    } break;
    
  case 7:
    if ( super_poder1 > super_poder2) {
      printf("Estado: %s\n", cidade1);
      printf("Atributo: Super poder\n");
      printf("Carta 1: %f VS Carta 2: %f\n", super_poder1, super_poder2);
      printf("### Carta 1 venceu! ###\n\n");
    
    } else if ( super_poder1 < super_poder2) {
      printf("Estado: %s\n", cidade2);
      printf("Atributo: Super poder\n");
      printf("Carta 1: %f VS Carta 2: %f\n", super_poder1, super_poder2);
      printf("### Carta 2 venceu! ###\n\n");
      
    } else {
      printf("*** EMPATE! ***\n");
      
    } break;
  }

return 0;
} 
