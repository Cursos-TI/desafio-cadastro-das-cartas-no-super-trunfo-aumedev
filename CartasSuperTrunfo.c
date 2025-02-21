#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

    // Declarando os dados da primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[20];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Declarando os dados da segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[20];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    
    // Solicitando dados da primeira carta para o usuário
    printf("Informe abaixo os dados referentes à primeira carta:\n");

    printf("Estado (ex.: A): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex.: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade (ex.: Recife): ");
    scanf("%s", cidade1);

    printf("População (ex.: 70502): ");
    scanf("%d", &populacao1);

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
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos (ex.: 19): ");
    scanf("%d", &pontosTuristicos2);


    // Exibição dos dados da primeira carta
    printf("\n-= CARTA 1 =-\n\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d pessoas\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);


    // Exibição dos dados da segunda carta
    printf("\n\n-= CARTA 2 =-\n\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d pessoas\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);


    return 0;
}
