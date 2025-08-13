#include <stdio.h>

int main() {
    unsigned long int populacao_carta1;
    float area_carta1;
    float pib_carta1;
    int pontos_turisticos_carta1;

    unsigned long int populacao_carta2;
    float area_carta2;
    float pib_carta2;
    int pontos_turisticos_carta2;

    printf("--- Cadastro da Carta 1 (Cidade A01) ---\n");
    printf("Digite a População: ");
    scanf("%lu", &populacao_carta1);
    printf("Digite a Área (em km²): ");
    scanf("%f", &area_carta1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib_carta1);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos_carta1);
    printf("\n");

    printf("--- Cadastro da Carta 2 (Cidade B02) ---\n");
    printf("Digite a População: ");
    scanf("%lu", &populacao_carta2);
    printf("Digite a Área (em km²): ");
    scanf("%f", &area_carta2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib_carta2);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos_carta2);
    printf("\n");

    float densidade_populacional_1 = (float)populacao_carta1 / area_carta1;
    float pib_per_capita_1 = (pib_carta1 * 1000000000) / (float)populacao_carta1;

    float densidade_populacional_2 = (float)populacao_carta2 / area_carta2;
    float pib_per_capita_2 = (pib_carta2 * 1000000000) / (float)populacao_carta2;

    float super_poder_1 = (float)populacao_carta1 + area_carta1 + (pib_carta1 * 1000000000) +
                          (float)pontos_turisticos_carta1 + (1.0f / densidade_populacional_1) + pib_per_capita_1;

    float super_poder_2 = (float)populacao_carta2 + area_carta2 + (pib_carta2 * 1000000000) +
                          (float)pontos_turisticos_carta2 + (1.0f / densidade_populacional_2) + pib_per_capita_2;

    printf("========================================\n");
    printf("           DADOS DAS CARTAS\n");
    printf("========================================\n\n");

    printf("--- Carta 1 (Cidade A01) ---\n");
    printf("População: %lu\n", populacao_carta1);
    printf("Área: %.2f km²\n", area_carta1);
    printf("PIB: R$ %.2f bilhões\n", pib_carta1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos_carta1);
    printf("-> Densidade Populacional: %.2f hab/km²\n", densidade_populacional_1);
    printf("-> PIB per Capita: R$ %.2f\n", pib_per_capita_1);
    printf("-> SUPER PODER: %.2f\n\n", super_poder_1);

    printf("--- Carta 2 (Cidade B02) ---\n");
    printf("População: %lu\n", populacao_carta2);
    printf("Área: %.2f km²\n", area_carta2);
    printf("PIB: R$ %.2f bilhões\n", pib_carta2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos_carta2);
    printf("-> Densidade Populacional: %.2f hab/km²\n", densidade_populacional_2);
    printf("-> PIB per Capita: R$ %.2f\n", pib_per_capita_2);
    printf("-> SUPER PODER: %.2f\n\n", super_poder_2);

    printf("========================================\n");
    printf("           RESULTADO DA DISPUTA\n");
    printf("    (1 = Carta 1 vence, 0 = Carta 2 vence)\n");
    printf("========================================\n");

    int vitoria_populacao = populacao_carta1 > populacao_carta2 ? 1 : 0;
    int vitoria_area = area_carta1 > area_carta2 ? 1 : 0;
    int vitoria_pib = pib_carta1 > pib_carta2 ? 1 : 0;
    int vitoria_pontos = pontos_turisticos_carta1 > pontos_turisticos_carta2 ? 1 : 0;
    int vitoria_densidade = densidade_populacional_1 < densidade_populacional_2 ? 1 : 0;
    int vitoria_pib_per_capita = pib_per_capita_1 > pib_per_capita_2 ? 1 : 0;
    int vitoria_super_poder = super_poder_1 > super_poder_2 ? 1 : 0;

    printf("População: \t\t%d\n", vitoria_populacao);
    printf("Área: \t\t\t%d\n", vitoria_area);
    printf("PIB: \t\t\t%d\n", vitoria_pib);
    printf("Pontos Turísticos: \t%d\n", vitoria_pontos);
    printf("Densidade Populacional: %d\n", vitoria_densidade);
    printf("PIB per Capita: \t%d\n", vitoria_pib_per_capita);
    printf("----------------------------------------\n");
    printf("SUPER PODER: \t\t%d\n", vitoria_super_poder);

    return 0;
}
