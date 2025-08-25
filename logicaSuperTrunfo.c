#include <stdio.h>

typedef struct {
    char estado[50];
    char codigo[10];
    char nome[50];
    unsigned long int populacao; // para números grandes
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
} Carta;

float calcular_super_poder(Carta c) {
    // Inverso da densidade populacional: se for zero, evitar divisão por zero
    float inverso_densidade = (c.densidade_populacional != 0) ? (1.0 / c.densidade_populacional) : 0;
    return (float)c.populacao + c.area + c.pib + c.pontos_turisticos + c.pib_per_capita + inverso_densidade;
}

int main() {
    Carta carta1, carta2;

    // Leitura Carta 1
    printf("Digite o estado da Carta 1: \n");
    scanf("%s", carta1.estado);
    printf("Digite o código da Carta 1: \n");
    scanf("%s", carta1.codigo);
    printf("Digite o nome da cidade da Carta 1: \n");
    scanf("%s", carta1.nome);
    printf("Digite a população da Carta 1: ");
    scanf("%lu", &carta1.populacao);
    printf("Digite a área da Carta 1: ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &carta1.pib);
    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Leitura Carta 2
    printf("Digite o estado da Carta 2: ");
    scanf("%s", carta2.estado);
    printf("Digite o código da Carta 2: ");
    scanf("%s", carta2.codigo);
    printf("Digite o nome da cidade da Carta 2: ");
    scanf("%s", carta2.nome);
    printf("Digite a população da Carta 2: ");
    scanf("%lu", &carta2.populacao);
    printf("Digite a área da Carta 2: ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &carta2.pib);
    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Cálculos
    carta1.densidade_populacional = carta1.populacao / carta1.area;
    carta2.densidade_populacional = carta2.populacao / carta2.area;

    carta1.pib_per_capita = carta1.pib / carta1.populacao;
    carta2.pib_per_capita = carta2.pib / carta2.populacao;

    carta1.super_poder = calcular_super_poder(carta1);
    carta2.super_poder = calcular_super_poder(carta2);

    //Exibição dos PIB's per capita e Densidade Populacional

    printf("\n\nValor Densidade Populacional Carta 1: %d\n", &carta1.densidade_populacional);
    printf("Valor PIB per capita Carta 1: %d\n", &carta1.pib_per_capita);

    printf("Valor Densidade Populacional Carta 2:%d\n", &carta2.densidade_populacional);
    printf("Valor PIB per capita Carta 2: %d\n\n", &carta2.pib_per_capita);

    // Comparações
    printf("\n Comparação de Cartas (Atributo: População): \n");

    printf("Carta 1: %s (%s): (%lu)\n", carta1.nome, carta1.estado, carta1.populacao);
    printf("Carta 2: %s (%s): (%lu)\n", carta2.nome, carta2.estado, carta2.populacao);
   
    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!", carta1.nome);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!", carta2.nome);
    }



    return 0;
}