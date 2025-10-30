#include <stdio.h>

int main() {

    char estado1[3];
    char codigo1[4];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1; 
    int pontos1;
    float densidade1;

    char estado2[3];
    char codigo2[4];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2; 
    int pontos2;
    float densidade2;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o Estado (ex: SP): ");
    scanf(" %2s", estado1);
    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf(" %3s", codigo1);
    printf("Digite o Nome do Pais: ");
    scanf(" %49[^\n]", nome1);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a Area (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1; 

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o Estado (ex: RJ): ");
    scanf(" %2s", estado2);
    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf(" %3s", codigo2);
    printf("Digite o Nome do Pais: ");
    scanf(" %49[^\n]", nome2);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a Area (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2; 

    printf("\n--- Carta 1 ---\n");
    printf("Pais: %s (%s)\n", nome1, estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Demografica: %.2f hab/km²\n", densidade1);

    printf("\n--- Carta 2 ---\n");
    printf("Pais: %s (%s)\n", nome2, estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Demografica: %.2f hab/km²\n", densidade2);

    int a1 = 0, a2 = 0;
    int valido = 0;

    printf("\n=== Escolha o PRIMEIRO atributo ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica (menor vence)\n");
    printf("Opcao: ");
    scanf("%d", &a1);

    switch (a1) {
        case 1: valido = 1; break;
        case 2: valido = 1; break;
        case 3: valido = 1; break;
        case 4: valido = 1; break;
        case 5: valido = 1; break;
        default:
            printf("Opcao invalida. Encerrando.\n");
            return 0;
    }

    do {
        printf("\n=== Escolha o SEGUNDO atributo (diferente do primeiro) ===\n");
        if (a1 != 1) printf("1 - Populacao\n");
        if (a1 != 2) printf("2 - Area\n");
        if (a1 != 3) printf("3 - PIB\n");
        if (a1 != 4) printf("4 - Numero de Pontos Turisticos\n");
        if (a1 != 5) printf("5 - Densidade Demografica (menor vence)\n");
        printf("Opcao: ");
        scanf("%d", &a2);

        if (a2 == a1) {
            printf("Voce nao pode escolher o mesmo atributo duas vezes. Tente novamente.\n");
            valido = 0;
        } else {
            switch (a2) {
                case 1: case 2: case 3: case 4: case 5:
                    valido = 1; break;
                default:
                    printf("Opcao invalida. Tente novamente.\n");
                    valido = 0;
            }
        }
    } while (!valido);

    float v1_a = 0.0f, v2_a = 0.0f; 
    float v1_b = 0.0f, v2_b = 0.0f; 

    switch (a1) {
        case 1: v1_a = (float)populacao1; v2_a = (float)populacao2; break;
        case 2: v1_a = area1;             v2_a = area2;             break;
        case 3: v1_a = pib1;              v2_a = pib2;              break;
        case 4: v1_a = (float)pontos1;    v2_a = (float)pontos2;    break;
        case 5: v1_a = densidade1;        v2_a = densidade2;        break;
        default: break;
    }

    switch (a2) {
        case 1: v1_b = (float)populacao1; v2_b = (float)populacao2; break;
        case 2: v1_b = area1;             v2_b = area2;             break;
        case 3: v1_b = pib1;              v2_b = pib2;              break;
        case 4: v1_b = (float)pontos1;    v2_b = (float)pontos2;    break;
        case 5: v1_b = densidade1;        v2_b = densidade2;        break;
        default: break;
    }

    int vencedorA = 0; 
    if (a1 == 5) { 
        if (v1_a < v2_a) vencedorA = 1;
        else if (v2_a < v1_a) vencedorA = 2;
        else vencedorA = 0;
    } else {       
        if (v1_a > v2_a) vencedorA = 1;
        else if (v2_a > v1_a) vencedorA = 2;
        else vencedorA = 0;
    }

    int vencedorB = 0;
    if (a2 == 5) {
        if (v1_b < v2_b) vencedorB = 1;
        else if (v2_b < v1_b) vencedorB = 2;
        else vencedorB = 0;
    } else {
        if (v1_b > v2_b) vencedorB = 1;
        else if (v2_b > v1_b) vencedorB = 2;
        else vencedorB = 0;
    }

    float soma1 = v1_a + v1_b;
    float soma2 = v2_a + v2_b;

    const char* nomeAttr;
    const char* nomeAttr2;

    switch (a1) {
        case 1: nomeAttr = "Populacao"; break;
        case 2: nomeAttr = "Area (km²)"; break;
        case 3: nomeAttr = "PIB (bilhoes)"; break;
        case 4: nomeAttr = "Pontos Turisticos"; break;
        case 5: nomeAttr = "Densidade Demografica (hab/km²)"; break;
        default: nomeAttr = "Desconhecido"; break;
    }
    switch (a2) {
        case 1: nomeAttr2 = "Populacao"; break;
        case 2: nomeAttr2 = "Area (km²)"; break;
        case 3: nomeAttr2 = "PIB (bilhoes)"; break;
        case 4: nomeAttr2 = "Pontos Turisticos"; break;
        case 5: nomeAttr2 = "Densidade Demografica (hab/km²)"; break;
        default: nomeAttr2 = "Desconhecido"; break;
    }

    printf("\n=== Comparacao Avancada (Dois Atributos) ===\n");
    printf("Paises: %s  x  %s\n", nome1, nome2);

    printf("\nAtributo 1: %s\n", nomeAttr);
    if (a1 == 2) {
        printf("%s: %.2f  |  %s: %.2f\n", nome1, v1_a, nome2, v2_a);
    } else if (a1 == 3) {
        printf("%s: %.2f  |  %s: %.2f\n", nome1, v1_a, nome2, v2_a);
    } else if (a1 == 5) {
        printf("%s: %.2f  |  %s: %.2f (menor vence)\n", nome1, v1_a, nome2, v2_a);
    } else {
        printf("%s: %.0f  |  %s: %.0f\n", nome1, v1_a, nome2, v2_a);
    }
    if (vencedorA == 1) printf("Vencedor no Atributo 1: Carta 1 (%s)\n", nome1);
    else if (vencedorA == 2) printf("Vencedor no Atributo 1: Carta 2 (%s)\n", nome2);
    else printf("Vencedor no Atributo 1: Empate!\n");

    printf("\nAtributo 2: %s\n", nomeAttr2);
    if (a2 == 2) {
        printf("%s: %.2f  |  %s: %.2f\n", nome1, v1_b, nome2, v2_b);
    } else if (a2 == 3) {
        printf("%s: %.2f  |  %s: %.2f\n", nome1, v1_b, nome2, v2_b);
    } else if (a2 == 5) {
        printf("%s: %.2f  |  %s: %.2f (menor vence)\n", nome1, v1_b, nome2, v2_b);
    } else {
        printf("%s: %.0f  |  %s: %.0f\n", nome1, v1_b, nome2, v2_b);
    }
    if (vencedorB == 1) printf("Vencedor no Atributo 2: Carta 1 (%s)\n", nome1);
    else if (vencedorB == 2) printf("Vencedor no Atributo 2: Carta 2 (%s)\n", nome2);
    else printf("Vencedor no Atributo 2: Empate!\n");

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", nome1, soma1);
    printf("%s: %.2f\n", nome2, soma2);

    const char* resultadoFinal = (soma1 > soma2) ? "Carta 1 venceu!" :
                                 (soma2 > soma1) ? "Carta 2 venceu!" :
                                                   "Empate!";
    printf("\nResultado Final: %s\n", resultadoFinal);

    return 0;
}
