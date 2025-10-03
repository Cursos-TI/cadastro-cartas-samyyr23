#include <stdio.h>

int main(){
    char estado;
    char codigo[3];
    char cidade[50];
    float populacao;
    float area;
    float pib;
    int pontos_turisticos;

        printf("Seja Bem-Vindo ao Super Trunfo! Por favor, cadastre duas cartas:\n");
        printf("Por favor, digite uma letra que represente seu estado escolhido (exemplo: Rio de Janeiro = R): ");
        scanf("%c", &estado);
        printf("Agora, digite um código de 01 a 04 para definir o número da carta: ");
        scanf("%2s", codigo);
        printf("Digite o nome da cidade escolhida: ");
        scanf("%s", cidade);
        printf("Qual o número de habitantes da cidade de %s? ", cidade);
        scanf("%f", &populacao);
        printf("Quantos quilômetros quadrados tem a área da cidade? ");
        scanf("%f", &area);
        printf("Qual o PIB da cidade? ");
        scanf("%f", &pib);
        printf("Quantos Pontos Turísticos há na cidade? ");
        scanf("%d", &pontos_turisticos);

        printf("Esses são os dados de sua primeira carta:\n");
        printf("Estado: %c\nCodigo: %c%s\nCidade: %s\nPopulação: %.2f\nÁrea: %.2f km²\nPIB: %.2f\nPontos Turísticos: %d\n", estado, estado, codigo, cidade, populacao, area, pib, pontos_turisticos);

            printf("Por favor, cadastre sua segunda carta:\n");
            printf("Digite novamente uma letra que represente seu estado escolhido (exemplo: Rio de Janeiro = R): ");
            scanf(" %c", &estado);
            printf("Agora, digite um código de 01 a 04 para definir o número da carta: ");
            scanf("%2s", codigo);
            printf("Digite o nome da cidade escolhida: ");
            scanf("%s", cidade);
            printf("Qual o número de habitantes da cidade de %s? ", cidade);
            scanf("%f", &populacao);
            printf("Quantos quilômetros quadrados tem a área da cidade? ");
            scanf("%f", &area);
            printf("Qual o PIB da cidade? ");
            scanf("%f", &pib);
            printf("Quantos Pontos Turísticos há na cidade? ");
            scanf("%d", &pontos_turisticos);

             printf("Esses são os dados de sua segunda carta:\n");
            printf("Estado: %c\nCodigo: %c%s\nCidade: %s\nPopulação: %.2f\nÁrea: %.2f km²\nPIB: %.2f\nPontos Turísticos: %d\n", estado, estado, codigo, cidade, populacao, area, pib, pontos_turisticos);


return 0;
}