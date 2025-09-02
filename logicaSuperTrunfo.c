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
    scanf("%d", &carta1.populacao);
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
    scanf("%d", &carta2.populacao);
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

   // Comparações 1
    //MENU DE OPÇÃO
    int escolhaopcao;
    
    printf("Escolha o atributo de comparação!!\n");
    printf("1. População\n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Número de pontos turísticos \n");
    printf("5. Densidade populacional \n");
    printf("Opção: ");
    scanf("%d", &escolhaopcao);

    printf("\n ----- COMPARAÇÃO ----- \n ");
   switch (escolhaopcao)
   {
   case 1:
        printf("As duas cidades escolhidas foram, %s, e %s \n", carta1.nome, carta2.nome);
        if (escolhaopcao == 1) { 
            printf("\n O atributo usado para comparação foi POPULAÇÃO.\n");
            if (carta1.populacao > carta2.populacao) {                
                printf("O valor da população para esta carta foi de %d pessoas \n", &carta1.populacao);
                printf("\n PARÁBENS, a vencedora foi a carta 1!! \n ");
            }else if (carta2.populacao > carta1.populacao){ 
                printf("O valor da população para esta carta foi de %d pessoas \n", &carta2.populacao);
                printf("\n PARÁBENS, a vencedora foi a carta 2!! \n ");
            }
        }else {
            printf("HOUVE UM EMPATE!!!");
        }
        break;
    case 2:
        if (escolhaopcao == 2) { 
            printf("O atributo usado para comparação foi ÁREA.\n");
            if (carta1.area > carta2.area) {                
                printf("O valor da ÁREA para esta carta foi de %f Km² \n", &carta1.area);
                printf("PARÁBENS, a vencedora foi a carta 1!! \n ");
            }else if (carta2.populacao > carta1.populacao){ 
                printf("O valor da ÁREA para esta carta foi de %f Km² \n", &carta2.area);
                printf("PARÁBENS, a vencedora foi a carta 2!! \n");
            }
        }else {
            printf("HOUVE UM EMPATE!!!");
        }
         break;
    case 3:
        if (escolhaopcao == 3) { 
            printf("O atributo usado para comparação foi PIB.\n");
            if (carta1.pib > carta2.pib) {                
                printf("O valor do PIB para esta carta foi de %f \n", &carta1.pib);
                printf("PARÁBENS, a vencedora foi a carta 1!! \n ");
            }else if (carta2.populacao > carta1.populacao){ 
                printf("O valor do PIB para esta carta foi de %f \n", &carta2.pib);
                printf("PARÁBENS, a vencedora foi a carta 2!! \n ");
            }
        }else {
            printf("HOUVE UM EMPATE!!!");
        }
         break;
    case 4:
        if (escolhaopcao == 4) { 
            printf("O atributo usado para comparação foi NÚMERO DE PONTOS TURÍSTICOS.\n");
            if (carta1.pontos_turisticos > carta2.pontos_turisticos) {                
                printf("O valor de pontos turisticos para esta carta foi de %d \n", &carta1.pontos_turisticos);
                printf("PARÁBENS, a vencedora foi a carta 1!! \n ");
            }else if (carta2.populacao > carta1.populacao){ 
                printf("O valor de pontos turisticos para esta carta foi de %d \n", &carta2.pontos_turisticos);
                printf("PARÁBENS, a vencedora foi a carta 2!! \n ");
            }
        }else {
            printf("HOUVE UM EMPATE!!!");
        }
         break;
    case 5:
        if (escolhaopcao == 5) { 
            printf("O atributo usado para comparação foi  DENSIDADE POPULACIONAL.\n");
            if (carta1.densidade_populacional < carta2.densidade_populacional) {                
                printf("O valor da densidade populacional para esta carta foi de %f \n", &carta1.densidade_populacional);
                printf("PARÁBENS, a vencedora foi a carta 1!! \n ");
            }else if (carta2.populacao < carta1.populacao){ 
                printf("O valor da densidade_populacional para esta carta foi de %f \n", &carta2.densidade_populacional);
                printf("PARÁBENS, a vencedora foi a carta 2 \n!! ");
            }
        }else {
            printf("HOUVE UM EMPATE!!!");
        }  
         break;
   default: 
        printf("Opção inválida! Encerrando a comparação.\n");
    break;
   }
   



    return 0;
}