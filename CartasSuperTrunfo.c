#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

    // Declarando os dados da primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[20];
    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1, pib1;
    float densidadePopulacional1;
    double pibPerCapita1;
    float superPoder1;

    // Declarando os dados da segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[20];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2;
    float densidadePopulacional2;
    double pibPerCapita2;
    float superPoder2;

    
    // Solicitando dados da primeira carta para o usuário
    printf("Informe abaixo os dados referentes à primeira carta:\n");

    printf("Estado (ex.: A): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex.: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade (ex.: Recife): ");
    scanf("%s", cidade1);

    printf("População (ex.: 70502): ");
    scanf("%ld", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos (ex.: 15): ");
    scanf("%d", &pontosTuristicos1);


    // Solicitando dados da segunda carta para o usuário
    printf("\nInforme abaixo os dados referentes à segunda carta:\n");

    printf("Estado (ex.: B): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex.: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade (ex.: Fortaleza): ");
    scanf("%s", cidade2);

    printf("População (ex.: 65300): ");
    scanf("%ld", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos (ex.: 19): ");
    scanf("%d", &pontosTuristicos2);


    // Cálculos antes da exibição
    densidadePopulacional1 = populacao1/area1;
    pibPerCapita1 = ((double)pib1 * 1000000000) / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);

    densidadePopulacional2 = populacao2/area2;
    pibPerCapita2 = ((double)pib2 * 1000000000) / populacao2;


    // Exibindo comparação de cartas
    printf("\n\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
