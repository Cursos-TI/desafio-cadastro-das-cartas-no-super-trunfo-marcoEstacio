#include <stdio.h>

int main()
{
    // Programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo
    // Entrar e exibir dados de 2 cartas. Não utilizar estrutura de repetição ou decisão

    int carta;
    // Uma letra de 'A' a 'H' (representando um dos oito estados)
    char estado1, estado2;
    // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    char codigo1[4], codigo2[4];
    // Nome da cidade
    char cidade1[15], cidade2[15];
    // Número de habitantes da cidade
    int populacao1, populacao2;
    // Área da cidade em quilômetros quadrados
    float area1, area2;
    // Produto Interno Bruto da cidade
    float pib1, pib2;
    // quantidade de pontos turísticos na cidade
    int numero_pontos_turisticos1, numero_pontos_turisticos2;
    // densidade populacional
    float densidade1, densidade2;
    //pib per capita 
    float pib_per_capita1, pib_per_capita2;


    // Entrada de dados para armazenamento nas variáveis:
    carta = 1;
   
    printf("Carta %d:\n", carta);
    // Estado
    printf("Digite a letra do Estado entre A e H: ");
    scanf(" %c", &estado1);
    // Código
    printf("Digite o código entre 1 e 4 (ex: A01, B03): ");
    scanf("%3s", codigo1);
    // Cidade
    printf("Digite o nome da cidade: ");
    scanf("%14s", cidade1);
    // População
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao1);
    // Area
    printf("Digite a área (km2) da cidade: ");
    scanf("%f", &area1);
    // PIB
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    // Pontos turísticos
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos1);
    //Densidade populacional
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    printf("\n");

    // Entrada de dados para armazenamento nas variáveis:
    carta = 2;
   
    printf("Carta %d:\n", carta);
    // Estado
    printf("Digite a letra do Estado entre A e H: ");
    scanf(" %c", &estado2);
    // Código
    printf("Digite o código entre 1 e 4 (ex: A01, B03): ");
    scanf("%3s", codigo2);
    // Cidade
    printf("Digite o nome da cidade: ");
    scanf("%14s", cidade2);
    // População
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao2);
    // Area
    printf("Digite a área (km2) da cidade: ");
    scanf("%f", &area2);
    // PIB
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    // Pontos turísticos
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos2);
    //Densidade populacional
    densidade1 = populacao2 / area2;
    pib_per_capita1 = pib2 / populacao2;
    printf("\n");

    // Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km2\n", area1); 
    printf("PIB: %.2f reais\n", pib1);
    printf("Pontos Turísticos: %d\n", numero_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    
    // Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Pontos Turísticos: %d\n", numero_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);


    printf("\n");

    return 0;
}