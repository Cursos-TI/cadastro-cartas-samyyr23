#include <stdio.h>

int main(){
    char estado;
    char codigo[3];
    char cidade[50];
    float populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade, percapita;

        printf("Seja Bem-Vindo ao Super Trunfo! Por favor, cadastre duas cartas:\n");
        printf("Por favor, digite uma letra que represente seu estado escolhido (exemplo: Rio de Janeiro = R): ");
        scanf("%c", &estado);
        printf("Agora, digite um código de 01 a 04 para definir o número da carta: ");
        scanf("%2s", codigo);
        printf("Digite o nome da cidade escolhida: ");
        scanf("%s", cidade);
        printf("Qual o número de habitantes da cidade de %s? (Por favor, digite sem ponto ou vírgula.) ", cidade);
        scanf("%f", &populacao);
        printf("Quantos quilômetros quadrados tem a área da cidade? (Por favor, digite sem ponto ou vírgula.) ");
        scanf("%f", &area);
        printf("Qual o PIB da cidade? (Por favor, digite sem ponto ou vírgula.) ");
        scanf("%f", &pib);
        printf("Quantos Pontos Turísticos há na cidade? ");
        scanf("%d", &pontos_turisticos);

        densidade = populacao / area;
        percapita = pib / populacao;
    
        printf("Esses são os dados de sua primeira carta:\n");
        printf("Estado: %c\nCodigo: %c%s\nCidade: %s\nPopulação: %.0f\nÁrea: %.0f km²\nPIB: %.0f\nPontos Turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\n", estado, estado, codigo, cidade, populacao, area, pib, pontos_turisticos, densidade, percapita);

            printf("Por favor, cadastre sua segunda carta:\n");
            printf("Digite novamente uma letra que represente seu estado escolhido (exemplo: Rio de Janeiro = R): ");
            scanf(" %c", &estado);
            printf("Agora, digite um código de 01 a 04 para definir o número da carta: ");
            scanf("%2s", codigo);
            printf("Digite o nome da cidade escolhida: ");
            scanf("%s", cidade);
            printf("Qual o número de habitantes da cidade de %s? (Por favor, digite sem ponto ou vírgula.) ", cidade);
            scanf("%f", &populacao);
            printf("Quantos quilômetros quadrados tem a área da cidade? (Por favor, digite sem ponto ou vírgula.) ");
            scanf("%f", &area);
            printf("Qual o PIB da cidade? (Por favor, digite sem ponto ou vírgula.) ");
            scanf("%f", &pib);
            printf("Quantos Pontos Turísticos há na cidade? ");
            scanf("%d", &pontos_turisticos);

            densidade = populacao / area;
            percapita = pib / populacao;

            printf("Esses são os dados de sua segunda carta:\n");
            printf("Estado: %c\nCodigo: %c%s\nCidade: %s\nPopulação: %.0f\nÁrea: %.0f km²\nPIB: %.0f\nPontos Turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\n", estado, estado, codigo, cidade, populacao, area, pib, pontos_turisticos, densidade, percapita);



}
