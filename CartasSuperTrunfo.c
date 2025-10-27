#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade1, densidade2, percapita1, percapita2;
    float superpoder1, superpoder2;

    printf("Cadastre a primeira carta:\n");
    printf("Estado (letra): ");
    scanf(" %c", &estado1);
    printf("Código (01 a 04): ");
    scanf("%2s", codigo1);
    printf("Nome da cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    densidade1 = populacao1 / area1;
    percapita1 = pib1 / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + percapita1 + (1.0 / densidade1);

    printf("\nCarta 1 cadastrada:\nEstado: %c\nCódigo: %c%s\nCidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f\nPontos Turísticos: %d\nDensidade: %.2f\nPIB per Capita: %.2f\nSuper Poder: %.2f\n\n",
           estado1, estado1, codigo1, cidade1, populacao1, area1, pib1, pontos_turisticos1, densidade1, percapita1, superpoder1);

    printf("Cadastre a segunda carta:\n");
    printf("Estado (letra): ");
    scanf(" %c", &estado2);
    printf("Código (01 a 04): ");
    scanf("%2s", codigo2);
    printf("Nome da cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    densidade2 = populacao2 / area2;
    percapita2 = pib2 / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + percapita2 + (1.0 / densidade2);

    printf("\nCarta 2 cadastrada:\nEstado: %c\nCódigo: %c%s\nCidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f\nPontos Turísticos: %d\nDensidade: %.2f\nPIB per Capita: %.2f\nSuper Poder: %.2f\n\n",
           estado2, estado2, codigo2, cidade2, populacao2, area2, pib2, pontos_turisticos2, densidade2, percapita2, superpoder2);

    printf("Comparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2 ? 1 : 2), (populacao1 > populacao2 ? 1 : 0));
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2 ? 1 : 2), (area1 > area2 ? 1 : 0));
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2 ? 1 : 2), (pib1 > pib2 ? 1 : 0));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontos_turisticos1 > pontos_turisticos2 ? 1 : 2), (pontos_turisticos1 > pontos_turisticos2 ? 1 : 0));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2 ? 1 : 2), (densidade1 < densidade2 ? 1 : 0));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (percapita1 > percapita2 ? 1 : 2), (percapita1 > percapita2 ? 1 : 0));
    printf("Super Poder: Carta %d venceu (%d)\n", (superpoder1 > superpoder2 ? 1 : 2), (superpoder1 > superpoder2 ? 1 : 0));

    return 0;
}