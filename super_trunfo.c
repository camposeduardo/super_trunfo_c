#include <stdio.h>

int main() {
    
    char estado1[3];
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1; 
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

    char estado2[3];
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2; 
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o Estado (ex: SP): ");
    scanf(" %2s", estado1);
    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf(" %3s", codigo1);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a Area (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o Estado (ex: RJ): ");
    scanf(" %2s", estado2);
    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf(" %3s", codigo2);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a Area (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;

    printf("\n--- Carta 1 ---\n");
    printf("Cidade: %s (%s)\n", nomeCidade1, estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Demografica: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n--- Carta 2 ---\n");
    printf("Cidade: %s (%s)\n", nomeCidade2, estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Demografica: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    int opcao;
    printf("\n=== Menu de Comparacao ===\n");
    printf("1 - Nome (apenas exibir)\n");
    printf("2 - Populacao\n");
    printf("3 - Area\n");
    printf("4 - PIB\n");
    printf("5 - Numero de Pontos Turisticos\n");
    printf("6 - Densidade Demografica (menor vence)\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("\n");

    switch (opcao) {
        case 1:
            printf("Atributo: Nome (apenas exibicao)\n");
            printf("Carta 1: %s (%s)\n", nomeCidade1, estado1);
            printf("Carta 2: %s (%s)\n", nomeCidade2, estado2);
            printf("Resultado: Atributo nao comparavel (string).\n");
            break;

        case 2:
            printf("Atributo: Populacao\n");
            printf("Carta 1 - %s (%s): %d\n", nomeCidade1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %d\n", nomeCidade2, estado2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: Area (km²)\n");
            printf("Carta 1 - %s (%s): %.2f km²\n", nomeCidade1, estado1, area1);
            printf("Carta 2 - %s (%s): %.2f km²\n", nomeCidade2, estado2, area2);

            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: PIB (bilhoes de reais)\n");
            printf("Carta 1 - %s (%s): %.2f\n", nomeCidade1, estado1, pib1);
            printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, estado2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Numero de Pontos Turisticos\n");
            printf("Carta 1 - %s (%s): %d\n", nomeCidade1, estado1, pontosTuristicos1);
            printf("Carta 2 - %s (%s): %d\n", nomeCidade2, estado2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 6:
            printf("Atributo: Densidade Demografica (hab/km²) [menor vence]\n");
            printf("Carta 1 - %s (%s): %.2f hab/km²\n", nomeCidade1, estado1, densidade1);
            printf("Carta 2 - %s (%s): %.2f hab/km²\n", nomeCidade2, estado2, densidade2);

            if (densidade1 < densidade2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida. Reinicie e escolha entre 1 e 6.\n");
            break;
    }

    return 0;
}
