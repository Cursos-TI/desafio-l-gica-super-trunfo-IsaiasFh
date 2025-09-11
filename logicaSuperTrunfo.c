#include <stdio.h>
#include <string.h>

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
    float somaAtributos;
} Carta;

int main() {
    Carta carta1, carta2;

    printf("Olá! Preencha os dados das cartas 1 e 2.\n\n");

    // Cadastro Carta 1
    printf("-----     CARTA 1     -----\n");
    printf("Digite o estado da Carta 1: \n");
    scanf("%s", carta1.estado);

    printf("Digite o código da Carta 1: \n");
    scanf("%s", carta1.codigo);

    printf("Digite o nome da cidade da Carta 1: \n");
    scanf("%s", carta1.nome);

do{
    printf("Digite a população da Carta 1: ");
    scanf("%lu", &carta1.populacao);
    if (carta1.populacao <=0) 
        printf("Erro: População não pode ser 0.\n");
} while (carta1.populacao <=0);

   do{
    printf("Digite a Área da Carta 1: ");
    scanf("%f", &carta1.area);
    if (carta1.area <=0) 
        printf("Erro: Área não pode ser 0.\n");
} while (carta1.area <=0);

     do{
    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &carta1.pib);
    if (carta1.pib <=0) 
        printf("Erro: PIB não pode ser 0.\n");
} while (carta1.pib <=0);

    printf("Quantidade de pontos turísticos da Carta 1: ");
    scanf("%d", &carta1.pontos_turisticos);
    

    // Cadastro Carta 2
      printf("-----     CARTA 2     -----\n");
    printf("Digite o estado da Carta 2: ");
    scanf("%s", carta2.estado);

    printf("Digite o código da Carta 2: ");
    scanf("%s", carta2.codigo);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf("%s", carta2.nome);

    do{
    printf("Digite a população da Carta 2: ");
    scanf("%lu", &carta2.populacao);
    if (carta2.populacao <=0) 
        printf("Erro: População não pode ser 0.\n");
} while (carta2.populacao <=0);

do{
    printf("Digite a Área da Carta 2: ");
    scanf("%f", &carta2.area);
    if (carta2.area <=0) 
        printf("Erro: População não pode ser 0.\n");
} while (carta2.area <=0);

do{
    printf("Digite a PIB da Carta 2: ");
    scanf("%f", &carta2.pib);
    if (carta2.pib <=0) 
        printf("Erro: População não pode ser 0.\n");
} while (carta2.pib <=0);

    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Cálculos
    carta1.populacao * 1000000000;
    carta2.populacao * 1000000000;

    carta1.pib * 1000000;
    carta2.pib * 1000000;

    carta1.densidade_populacional = (float)carta1.populacao / carta1.area;
    carta2.densidade_populacional = (float)carta2.populacao / carta2.area;

    carta1.pib_per_capita = carta1.pib / carta1.populacao;
    carta2.pib_per_capita = carta2.pib / carta2.populacao;

    //   -------    ESCOLHA DOS DOIS ATRIBUTOS  --------
    int atributo1, atributo2;
    
    printf("\n Escolha o primeiro atributo para comparação: \n");
    printf("1. População\n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Número de pontos turísticos \n");
    printf("5. Densidade populacional \n");
    scanf("%d", &atributo1);
    while (atributo1 < 1 || atributo1 > 5 ){
        printf("Opção inválida. Escolha novamente:");
        scanf("%d", &atributo1);
    }

    printf("\n Escolha o segundo atributo (diferente do primeiro):\n");
    for (int i =1; i <=5; i++){
        if (i != atributo1) {
            switch (i)
            {
            case 1: printf("1.População\n"); break;
            case 2: printf("2.Área\n"); break;
            case 3: printf("3.PIB\n");  break;
            case 4: printf("4.Pontos Turísticos\n");  break;
            case 5: printf("5.Densidade Populacional\n");  break;
            }
        }
    }
        scanf("%d", &atributo2);
        while (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1){
        printf("Opção inválida. Escolha novamente:");
        scanf("%d", &atributo2);
        };

        // ------ Atribuição dos valores obtidos ------
        float valorCarta1A1, valorCarta2A1, valorCarta1A2, valorCarta2A2;

        switch (atributo1) {
        case 1: valorCarta1A1 = carta1.populacao; valorCarta2A1 = carta2.populacao; break;
        case 2: valorCarta1A1 = carta1.area; valorCarta2A1 = carta2.area; break;
        case 3: valorCarta1A1 = carta1.pib; valorCarta2A1 = carta2.pib; break;
        case 4: valorCarta1A1 = carta1.pontos_turisticos; valorCarta2A1 = carta2.pontos_turisticos; break;
        case 5: valorCarta1A1 = carta1.densidade_populacional; valorCarta2A1 = carta2.densidade_populacional; break;
        }

         switch (atributo2) {
        case 1: valorCarta1A2 = carta1.populacao; valorCarta2A2 = carta2.populacao; break;
        case 2: valorCarta1A2 = carta1.area; valorCarta2A2 = carta2.area; break;
        case 3: valorCarta1A2 = carta1.pib; valorCarta2A2 = carta2.pib; break;
        case 4: valorCarta1A2 = carta1.pontos_turisticos; valorCarta2A2 = carta2.pontos_turisticos; break;
        case 5: valorCarta1A2 = carta1.densidade_populacional; valorCarta2A2 = carta2.densidade_populacional; break;
         }

        // ------- COMPARAÇÃO --------
            int vencedorA1 = (atributo1 == 5) ? (valorCarta1A1 < valorCarta2A1 ? 1 : (valorCarta1A1 > valorCarta2A1 ? 2 : 0))
            : (valorCarta1A1 > valorCarta2A1 ? 1 : (valorCarta1A1 < valorCarta2A1 ? 2 : 0));

            int vencedorA2 =  (atributo2 == 5) ? (valorCarta1A2 < valorCarta2A2 ?  1 : (valorCarta1A2 > valorCarta2A2 ? 2 : 0))
            : (valorCarta1A2 > valorCarta2A2 ? 1 : (valorCarta1A2 < valorCarta2A2 ? 2 : 0));

            float somaCarta1 = valorCarta1A1 + valorCarta1A2;
            float somaCarta2 = valorCarta2A1 + valorCarta2A2;

            // -------  RESULTADOS -------
            printf("\n ------  RESULTADOS ------\n");
            printf("%s: Atributo1=%.2f, Atributo2=%.2f, Soma:%.2f\n", carta1.nome, valorCarta1A1, valorCarta1A2, somaCarta1);
            printf("%s: Atributo1=%.2f, Atributo2=%.2f, Soma:%.2f\n", carta2.nome, valorCarta2A1, valorCarta2A2, somaCarta2);
            
            if (somaCarta1 > somaCarta2) {
                printf("A carta vencedora é %s!\n", carta1.nome);
            } else if (somaCarta2 > somaCarta1) {
                printf("A carta vencedora é %s!\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }

         return 0;
        }



   
