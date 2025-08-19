#include <stdio.h>

// Definição de uma estrutura (struct) para representar uma Carta do Super Trunfo
typedef struct {
    char estado;            // Estado da carta (A até H)
    int numero;             // Número da carta (01 até 04)
    char cidade[50];        // Nome da cidade
    int populacao;          // População da cidade
    float area;             // Área em km²
    float pib;              // PIB em bilhões de reais
    int pontosTuristicos;   // Número de pontos turísticos
    float densidade;        // habitantes por km²
    float pibPerCapita;     // PIB dividido pela população
    float pibEmBilhoes;     // PIB que o usuário digita
} Carta;

int main() {
    Carta carta1, carta2;

    // Entrada da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Informe o Numero da Carta (01-04): ");
    scanf("%d", &carta1.numero);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", carta1.cidade);

    printf("Informe a Populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Informe a Area (em km²): ");
    scanf("%f", &carta1.area);

    printf("Informe o PIB (em bilhoes de reais): ");
    scanf("%f", &carta1.pibEmBilhoes);

    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cálculos da Carta 1
    carta1.densidade = carta1.populacao / carta1.area;
    float pibEmReais1 = carta1.pibEmBilhoes * 1000000000.0;
    carta1.pibPerCapita = pibEmReais1 / carta1.populacao;

    // Entrada da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Informe o Numero da Carta (01-04): ");
    scanf("%d", &carta2.numero);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", carta2.cidade);

    printf("Informe a Populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Informe a Area (em km²): ");
    scanf("%f", &carta2.area);

    printf("Informe o PIB (em bilhoes de reais): ");
    scanf("%f", &carta2.pibEmBilhoes);

    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculos da Carta 2
    carta2.densidade = carta2.populacao / carta2.area;
    float pibEmReais2 = carta2.pibEmBilhoes * 1000000000.0;
    carta2.pibPerCapita = pibEmReais2 / carta2.populacao;

    // Saída de dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %c%02d\n", carta1.estado, carta1.numero);
    printf("Nome da Cidade: %s\n", carta1.cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pibEmBilhoes);
    printf("Numero de Pontos Turisticos: %.0d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade);
    printf("PIB per Capita: %.2f reais\n", carta1.pibPerCapita);

    // Saída de dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %c%02d\n", carta2.estado, carta2.numero);
    printf("Nome da Cidade: %s\n", carta2.cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pibEmBilhoes);
    printf("Numero de Pontos Turisticos: %.0d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade);
    printf("PIB per Capita: %.2f reais\n", carta2.pibPerCapita);

    return 0;
}
