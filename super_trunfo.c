#include <stdio.h>

int main() {

    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1; 
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;


    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2; 
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%3s", codigo1);                
    printf("Digite o Nome da Cidade: ");
    scanf(" %49[^\n]", nomeCidade1);     
    printf("Digite a Populacao: ");
    scanf("%lu", &populacao1);
    printf("Digite a Area (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1     = (float)populacao1 / area1;
    pibPerCapita1  = ( (pib1 * 1000000000.0f) / (float)populacao1 ); 

    superPoder1    = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1
                     + pibPerCapita1 + (area1 / (float)populacao1);


    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%3s", codigo2);
    printf("Digite o Nome da Cidade: ");
    scanf(" %49[^\n]", nomeCidade2);
    printf("Digite a Populacao: ");
    scanf("%lu", &populacao2);
    printf("Digite a Area (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2     = (float)populacao2 / area2;
    pibPerCapita2  = ( (pib2 * 1000000000.0f) / (float)populacao2 );
    superPoder2    = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2
                     + pibPerCapita2 + (area2 / (float)populacao2);

    printf("\n\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    int cmpPopulacao          = (populacao1 > populacao2);
    int cmpArea               = (area1 > area2);
    int cmpPIB                = (pib1 > pib2);
    int cmpPontos             = (pontosTuristicos1 > pontosTuristicos2);
    int cmpDensidade          = (densidade1 < densidade2); // menor vence
    int cmpPIBPerCapita       = (pibPerCapita1 > pibPerCapita2);
    int cmpSuperPoder         = (superPoder1 > superPoder2);

    printf("\n\nComparacao de Cartas:\n");
    printf("Populacao: Carta %d venceu (%d)\n", cmpPopulacao ? 1 : 2, cmpPopulacao);
    printf("Area: Carta %d venceu (%d)\n", cmpArea ? 1 : 2, cmpArea);
    printf("PIB: Carta %d venceu (%d)\n", cmpPIB ? 1 : 2, cmpPIB);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", cmpPontos ? 1 : 2, cmpPontos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", cmpDensidade ? 1 : 2, cmpDensidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", cmpPIBPerCapita ? 1 : 2, cmpPIBPerCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", cmpSuperPoder ? 1 : 2, cmpSuperPoder);

    return 0;
}
