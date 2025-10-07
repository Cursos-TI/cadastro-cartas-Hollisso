#include <stdio.h>

// Definição de constantes (Pesquisei fora do curso)
#define POPULACAO 1
#define AREA 2
#define PIB_VALOR 3
#define PONTOS_TURISTICOS 4
#define DENSIDADE_POPULACIONAL 5
#define PIB_PER_CAPITA 6
#define SUPER_PODER 7

int main() {
    // --- DADOS DAS CARTAS (Pré-cadastradas) ---
    char estado1[10] = "CE", estado2[10] = "SP"; 
    char cidade1[20] = "FORTALEZA", cidade2[10] = "SOROCABA";
    unsigned long int populacao1 = 2570000, populacao2 = 700000;
    float area1 = 312.0, area2 = 450.0; // Usar float literals (312.0) ajuda nas operações
    float PIB1 = 73.0, PIB2 = 60.0; // Em Bilhões
    int pontos_turisticos1 = 10, pontos_turisticos2 = 20;

    float densidade_populacional1, densidade_populacional2;
    float PIB_per_capita1, PIB_per_capita2;
    float super_poder1, super_poder2;

    // Nomes dos atributos para exibição
    char nomePopulação[30] = "População";
    char nomeArea[30] = "Area";
    char nomePIB[30] = "PIB (em Bilhoes)";
    char nomePontosTuristicos[30] = "Pontos Turisticos";
    char nomeDensidadePopulacional[30] = "Densidade Populacional";
    char nomePIBperCapita[30] = "PIB per Capita";
    char nomeSuperPoder[30] = "Super Poder";

    // --- VARIÁVEIS DO JOGO ---
    int at1_escolha, at2_escolha; // Opções do menu (1 a 7)
    
    // Variáveis para armazenar os valores dos atributos ESCOLHIDOS (para a soma)
    float valor1_carta1, valor1_carta2; 
    float valor2_carta1, valor2_carta2; 
    
    // Variáveis para armazenar o nome dos atributos escolhidos
    char *nome_at1, *nome_at2; 
    
    // Variáveis de comparação
    int vitorias_carta1 = 0;
    int vitorias_carta2 = 0;
    float soma_carta1, soma_carta2;
    char *resultado_rodada;


    // --- CÁLCULOS DAS VARIÁVEIS DERIVADAS ---

    // Note: Converte populacao1 para float antes da divisão para evitar truncamento de inteiro
    densidade_populacional1 = (float)populacao1 / area1;
    densidade_populacional2 = (float)populacao2 / area2;

    // Note: Converte populacao para float antes da divisão
    PIB_per_capita1 = PIB1 / (float)populacao1;
    PIB_per_capita2 = PIB2 / (float)populacao2;

    // Cálculo do super poder
    super_poder1 = (float)populacao1 + area1 + PIB1 + pontos_turisticos1 + PIB_per_capita1 - densidade_populacional1;
    super_poder2 = (float)populacao2 + area2 + PIB2 + pontos_turisticos2 + PIB_per_capita2 - densidade_populacional2;
    
    printf("\n--- SUPER TRUNFO CIDADES ---\n");
    printf("Carta 1: %s (%s)\n", cidade1, estado1);
    printf("Carta 2: %s (%s)\n", cidade2, estado2);
    printf("---------------------------\n\n");


    // ------------------------------------------
    // --- 1. ESCOLHA DO PRIMEIRO ATRIBUTO ---
    // ------------------------------------------

    MenuAtributo1: // Um rótulo 'goto' para tratar entrada inválida
    printf("*** Escolha o PRIMEIRO atributo de comparação: ***\n");
    printf("1. %s\n", nomePopulação);
    printf("2. %s\n", nomeArea);
    printf("3. %s\n", nomePIB);
    printf("4. %s\n", nomePontosTuristicos);
    printf("5. %s\n", nomeDensidadePopulacional);
    printf("6. %s\n", nomePIBperCapita);
    printf("7. %s\n", nomeSuperPoder);
    printf("Escolha seu atributo (1-7): ");
    scanf("%d", &at1_escolha);

    printf("\n");

    if (at1_escolha < 1 || at1_escolha > 7) {
        printf("Opcao invalida. Por favor, escolha um numero entre 1 e 7.\n\n");
        goto MenuAtributo1; // Volta ao menu se a entrada for inválida (Pesquisa fora do curso)
    }

    // --- SWITCH PARA ARMAZENAR O VALOR E NOME DO PRIMEIRO ATRIBUTO ---
    switch (at1_escolha) { 
        case POPULACAO: 
            valor1_carta1 = (float)populacao1; valor1_carta2 = (float)populacao2;
            nome_at1 = nomePopulação;
            break;
        case AREA:
            valor1_carta1 = area1; valor1_carta2 = area2;
            nome_at1 = nomeArea;
            break;
        case PIB_VALOR:
            valor1_carta1 = PIB1; valor1_carta2 = PIB2;
            nome_at1 = nomePIB;
            break;
        case PONTOS_TURISTICOS:
            valor1_carta1 = (float)pontos_turisticos1; valor1_carta2 = (float)pontos_turisticos2;
            nome_at1 = nomePontosTuristicos;
            break;
        case DENSIDADE_POPULACIONAL:
            valor1_carta1 = densidade_populacional1; valor1_carta2 = densidade_populacional2;
            nome_at1 = nomeDensidadePopulacional;
            break;
        case PIB_PER_CAPITA:
            valor1_carta1 = PIB_per_capita1; valor1_carta2 = PIB_per_capita2;
            nome_at1 = nomePIBperCapita;
            break;
        case SUPER_PODER:
            valor1_carta1 = super_poder1; valor1_carta2 = super_poder2;
            nome_at1 = nomeSuperPoder;
            break;
        default: 
            printf("Erro interno na escolha do primeiro atributo.\n");
            return 1; // Encerra o programa com erro
    }

    // ------------------------------------------
    // --- 2. ESCOLHA DO SEGUNDO ATRIBUTO ---
    // ------------------------------------------

    MenuAtributo2:
    printf("*** Escolha o SEGUNDO atributo de comparação: ***\n");
    printf("O atributo '%s' (Opcao %d) ja foi escolhido.\n", nome_at1, at1_escolha);
    printf("1. %s\n", nomePopulação);
    printf("2. %s\n", nomeArea);
    printf("3. %s\n", nomePIB);
    printf("4. %s\n", nomePontosTuristicos);
    printf("5. %s\n", nomeDensidadePopulacional);
    printf("6. %s\n", nomePIBperCapita);
    printf("7. %s\n", nomeSuperPoder);
    printf("Escolha seu atributo (1-7): ");
    scanf("%d", &at2_escolha);

    printf("\n");

    if (at2_escolha < 1 || at2_escolha > 7) {
        printf("Opcao invalida. Por favor, escolha um numero entre 1 e 7.\n\n");
        goto MenuAtributo2; // Volta ao menu se a entrada for inválida ( Pesquisa fora do curso)
    }
    
    // Lógica para garantir que o segundo atributo não seja igual ao primeiro
    if (at2_escolha == at1_escolha) {
        printf("O atributo escolhido ja foi selecionado. Escolha outro.\n\n");
        goto MenuAtributo2; // Volta ao menu
    }
    
    // --- SWITCH PARA ARMAZENAR O VALOR E NOME DO SEGUNDO ATRIBUTO ---
    switch (at2_escolha) {
        case POPULACAO:
            valor2_carta1 = (float)populacao1; valor2_carta2 = (float)populacao2;
            nome_at2 = nomePopulação;
            break;
        case AREA:
            valor2_carta1 = area1; valor2_carta2 = area2;
            nome_at2 = nomeArea;
            break;
        case PIB_VALOR:
            valor2_carta1 = PIB1; valor2_carta2 = PIB2;
            nome_at2 = nomePIB;
            break;
        case PONTOS_TURISTICOS:
            valor2_carta1 = (float)pontos_turisticos1; valor2_carta2 = (float)pontos_turisticos2;
            nome_at2 = nomePontosTuristicos;
            break;
        case DENSIDADE_POPULACIONAL:
            valor2_carta1 = densidade_populacional1; valor2_carta2 = densidade_populacional2;
            nome_at2 = nomeDensidadePopulacional;
            break;
        case PIB_PER_CAPITA:
            valor2_carta1 = PIB_per_capita1; valor2_carta2 = PIB_per_capita2;
            nome_at2 = nomePIBperCapita;
            break;
        case SUPER_PODER:
            valor2_carta1 = super_poder1; valor2_carta2 = super_poder2;
            nome_at2 = nomeSuperPoder;
            break;
    }


    // ------------------------------------------
    // --- 3. EXIBIÇÃO E COMPARAÇÃO DE ATRIBUTOS ---
    // ------------------------------------------

    printf("--- COMPARACAO DE ATRIBUTOS ---\n");
    printf("Atributo 1: %s\n", nome_at1);
    printf("  %s: %.2f | %s: %.2f\n", cidade1, valor1_carta1, cidade2, valor1_carta2);
    
    printf("Atributo 2: %s\n", nome_at2);
    printf("  %s: %.2f | %s: %.2f\n", cidade1, valor2_carta1, cidade2, valor2_carta2);
    printf("-------------------------------\n");

    // --- COMPARAÇÃO ATRIBUTO 1 ---
    
    // Regra especial: Densidade Demográfica (5) vence o menor valor
    if (at1_escolha == DENSIDADE_POPULACIONAL) {
        if (valor1_carta1 < valor1_carta2) {
            vitorias_carta1++;
        } else if (valor2_carta2 < valor1_carta1) {
            vitorias_carta2++;
        }
    } 
    // Regra geral: Vence o maior valor
    else {
        if (valor1_carta1 > valor1_carta2) {
            vitorias_carta1++;
        } else if (valor1_carta2 > valor1_carta1) {
            vitorias_carta2++;
        }
    }

    // --- COMPARAÇÃO ATRIBUTO 2 ---

    // Regra especial: Densidade Demográfica (5) vence o menor valor
    if (at2_escolha == DENSIDADE_POPULACIONAL) {
        if (valor2_carta1 < valor2_carta2) {
            vitorias_carta1++;
        } else if (valor2_carta2 < valor2_carta1) {
            vitorias_carta2++;
        }
    } 
    // Regra geral: Vence o maior valor
    else {
        if (valor2_carta1 > valor2_carta2) {
            vitorias_carta1++;
        } else if (valor2_carta2 > valor2_carta1) {
            vitorias_carta2++;
        }
    }
    
    printf("Vitorias por atributo: %s: %d | %s: %d\n", cidade1, vitorias_carta1, cidade2, vitorias_carta2);

    // ------------------------------------------
    // --- 4. SOMA E RESULTADO FINAL (OPERADOR TERNÁRIO) ---
    // ------------------------------------------

    soma_carta1 = valor1_carta1 + valor2_carta1;
    soma_carta2 = valor1_carta2 + valor2_carta2;

    printf("\n--- RESULTADO FINAL ---\n");
    printf("Soma %s: %.2f\n", cidade1, soma_carta1);
    printf("Soma %s: %.2f\n", cidade2, soma_carta2);
    
    // Uso do Operador Ternário (requisito do desafio)
    resultado_rodada = (soma_carta1 > soma_carta2) ? cidade1 : 
                       (soma_carta2 > soma_carta1) ? cidade2 : 
                       "Empate";

    printf("\nResultado da Rodada: ");
    
    if (resultado_rodada[0] == 'E') {
        printf("EMPATE!\n");
    } else {
        printf("A cidade **%s** venceu a rodada!\n", resultado_rodada);
    }
    
    return 0;
}