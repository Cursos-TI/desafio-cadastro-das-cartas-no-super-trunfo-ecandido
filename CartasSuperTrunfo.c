#include <stdio.h>
#include <string.h>

// Definição de uma estrutura (struct) para representar uma Carta do Super Trunfo
typedef struct {
    char estado;                // Estado da carta (A até H)
    int numero;                 // Número da carta (01 até 04)
    char cidade[50];            // Nome da cidade
    unsigned long int populacao;      // População da cidade
    float area;                 // Área em km²
    float pib;                  // PIB em bilhões de reais
    int pontosTuristicos;       // Número de pontos turísticos
    float densidade;            // habitantes por km²
    float pibPerCapita;         // PIB dividido pela população
    float pibEmBilhoes;         // PIB que o usuário digita
    float superPoder;           // Novo atributo para o Super Poder
} Carta;

// Função para exibir as cartas e realizar a batalha
void exibirECalcular(Carta carta1, Carta carta2) {
    int opcao;

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %c%02d\n", carta1.estado, carta1.numero);
    printf("Nome da Cidade: %s\n", carta1.cidade);
    printf("Populacao: %lu\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pibEmBilhoes);
    printf("Numero de Pontos Turisticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade);
    printf("PIB per Capita: %.2f reais\n", carta1.pibPerCapita);
    printf("Super Poder: %.2f\n", carta1.superPoder);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %c%02d\n", carta2.estado, carta2.numero);
    printf("Nome da Cidade: %s\n", carta2.cidade);
    printf("Populacao: %lu\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pibEmBilhoes);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade);
    printf("PIB per Capita: %.2f reais\n", carta2.pibPerCapita);
    printf("Super Poder: %.2f\n", carta2.superPoder);

    // Menu interativo para escolher o atributo
    printf("\n--- Batalha Super Trunfo ---\n");
    printf("Escolha o atributo para a batalha:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    // Lógica de comparação usando switch e if-else aninhados
    switch (opcao) {
        case 1: // População
            printf("\nAtributo escolhido: Populacao\n");
            printf("%s (Carta 1): %lu\n", carta1.cidade, carta1.populacao);
            printf("%s (Carta 2): %lu\n", carta2.cidade, carta2.populacao);
            if (carta1.populacao > carta2.populacao) {
                printf("\nResultado: %s (Carta 1) vence!\n", carta1.cidade);
            } else if (carta2.populacao > carta1.populacao) {
                printf("\nResultado: %s (Carta 2) vence!\n", carta2.cidade);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 2: // Área
            printf("\nAtributo escolhido: Area\n");
            printf("%s (Carta 1): %.2f km²\n", carta1.cidade, carta1.area);
            printf("%s (Carta 2): %.2f km²\n", carta2.cidade, carta2.area);
            if (carta1.area > carta2.area) {
                printf("\nResultado: %s (Carta 1) vence!\n", carta1.cidade);
            } else if (carta2.area > carta1.area) {
                printf("\nResultado: %s (Carta 2) vence!\n", carta2.cidade);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 3: // PIB
            printf("\nAtributo escolhido: PIB\n");
            printf("%s (Carta 1): %.2f bilhoes\n", carta1.cidade, carta1.pibEmBilhoes);
            printf("%s (Carta 2): %.2f bilhoes\n", carta2.cidade, carta2.pibEmBilhoes);
            if (carta1.pibEmBilhoes > carta2.pibEmBilhoes) {
                printf("\nResultado: %s (Carta 1) vence!\n", carta1.cidade);
            } else if (carta2.pibEmBilhoes > carta1.pibEmBilhoes) {
                printf("\nResultado: %s (Carta 2) vence!\n", carta2.cidade);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 4: // Pontos Turísticos
            printf("\nAtributo escolhido: Pontos Turisticos\n");
            printf("%s (Carta 1): %d\n", carta1.cidade, carta1.pontosTuristicos);
            printf("%s (Carta 2): %d\n", carta2.cidade, carta2.pontosTuristicos);
            if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
                printf("\nResultado: %s (Carta 1) vence!\n", carta1.cidade);
            } else if (carta2.pontosTuristicos > carta1.pontosTuristicos) {
                printf("\nResultado: %s (Carta 2) vence!\n", carta2.cidade);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 5: // Densidade Populacional (regra invertida)
            printf("\nAtributo escolhido: Densidade Populacional\n");
            printf("%s (Carta 1): %.2f hab/km²\n", carta1.cidade, carta1.densidade);
            printf("%s (Carta 2): %.2f hab/km²\n", carta2.cidade, carta2.densidade);
            if (carta1.densidade < carta2.densidade) { // Menor valor vence
                printf("\nResultado: %s (Carta 1) vence!\n", carta1.cidade);
            } else if (carta2.densidade < carta1.densidade) {
                printf("\nResultado: %s (Carta 2) vence!\n", carta2.cidade);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        default:
            printf("\nOpcao invalida. Por favor, escolha um numero de 1 a 5.\n");
    }
}

int main() {
    Carta carta1, carta2;

    // Entrada da Carta 1
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &carta1.estado);
    printf("Informe o Numero da Carta (01-04): ");
    scanf("%d", &carta1.numero);
    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", carta1.cidade);
    printf("Informe a Populacao: ");
    scanf("%lu", &carta1.populacao);
    printf("Informe a Area (em km²): ");
    scanf("%f", &carta1.area);
    printf("Informe o PIB (em bilhoes de reais): ");
    scanf("%f", &carta1.pibEmBilhoes);
    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cálculos da Carta 1
    carta1.densidade = (float)carta1.populacao / carta1.area;
    float pibEmReais1 = carta1.pibEmBilhoes * 1000000000.0;
    carta1.pibPerCapita = pibEmReais1 / carta1.populacao;
    carta1.superPoder = (float)carta1.populacao + carta1.area + carta1.pibEmBilhoes + (float)carta1.pontosTuristicos + carta1.pibPerCapita + (1.0 / carta1.densidade);


    // Entrada da Carta 2
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &carta2.estado);
    printf("Informe o Numero da Carta (01-04): ");
    scanf("%d", &carta2.numero);
    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", carta2.cidade);
    printf("Informe a Populacao: ");
    scanf("%lu", &carta2.populacao);
    printf("Informe a Area (em km²): ");
    scanf("%f", &carta2.area);
    printf("Informe o PIB (em bilhoes de reais): ");
    scanf("%f", &carta2.pibEmBilhoes);
    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculos da Carta 2
    carta2.densidade = (float)carta2.populacao / carta2.area;
    float pibEmReais2 = carta2.pibEmBilhoes * 1000000000.0;
    carta2.pibPerCapita = pibEmReais2 / carta2.populacao;
    carta2.superPoder = (float)carta2.populacao + carta2.area + carta2.pibEmBilhoes + (float)carta2.pontosTuristicos + carta2.pibPerCapita + (1.0 / carta2.densidade);


    // Exibe as cartas e inicia a batalha
    exibirECalcular(carta1, carta2);

    return 0;
}
