#include <stdio.h>

typedef struct {
    char estado;
    int numero;
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

int main() {
    Carta carta1, carta2;

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

    printf("Informe o PIB: ");
    scanf("%f", &carta1.pib);

    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

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

    printf("Informe o PIB: ");
    scanf("%f", &carta2.pib);

    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %c%02d\n", carta1.estado, carta1.numero);
    printf("Nome da Cidade: %s\n", carta1.cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.pontosTuristicos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %c%02d\n", carta2.estado, carta2.numero);
    printf("Nome da Cidade: %s\n", carta2.cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
