#include <stdio.h>

int main() {
    char estado1[30], estado2[30]; 
    char codigo1[10], codigo2[10];
    char cidade1[30], cidade2[30];
    unsigned int populacao1, populacao2;
    unsigned int pontos_turisticos1, pontos_turisticos2;
    unsigned int PIB1, PIB2;
    unsigned int area1, area2;
    unsigned int PPC1, PPC2; // PIB per capita 
    unsigned int DP1, DP2;  // densidade populacional 

    // Primeira cidade
    printf("Digite o primeiro estado:\n");
    scanf("%s", estado1);

    printf("Digite o codigo do primeiro estado:\n");
    scanf("%s", codigo1);

    printf("Digite o nome da capital do primeiro estado:\n");
    scanf("%s", cidade1);

    printf("Digite o valor da população (sem vírgula ou espaço) do primeiro estado:\n");
    scanf("%u", &populacao1);

    printf("Digite o valor do PIB do primeiro estado:\n");
    scanf("%u", &PIB1);

    printf("Digite quantos km² tem seu primeiro estado:\n");
    scanf("%u", &area1);

    printf("Digite quantos pontos turisticos existem no primeiro estado:\n");
    scanf("%u", &pontos_turisticos1);

    // Cálculos para a primeira cidade
    PPC1 = PIB1 / populacao1;
    DP1 = populacao1 / area1;

    // Segunda cidade
    printf("Digite o segundo estado:\n");
    scanf("%s", estado2);

    printf("Digite o codigo do segundo estado:\n");
    scanf("%s", codigo2);

    printf("Digite o nome da capital do segundo estado:\n");
    scanf("%s", cidade2);

    printf("Digite o valor da população (sem vírgula ou espaço) do segundo estado:\n");
    scanf("%u", &populacao2);

    printf("Digite o valor do PIB do segundo estado:\n");
    scanf("%u", &PIB2);

    printf("Digite quantos km² tem seu segundo estado:\n");
    scanf("%u", &area2);

    printf("Digite quantos pontos turisticos existem no segundo estado:\n");
    scanf("%u", &pontos_turisticos2);

    // Cálculos para a segunda cidade
    PPC2 = PIB2 / populacao2;
    DP2 = populacao2 / area2;

    // Comparação de Cartas
    printf("\nComparação de Cartas:\n");

    // População
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2) ? 1 : 0);

    // Área
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2) ? 1 : 0);

    // PIB
    printf("PIB: Carta %d venceu (%d)\n", (PIB1 > PIB2) ? 1 : 2, (PIB1 > PIB2) ? 1 : 0);

    // Pontos Turísticos
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontos_turisticos1 > pontos_turisticos2) ? 1 : 2, (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0);

    // Densidade Populacional
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (DP1 > DP2) ? 1 : 2, (DP1 > DP2) ? 1 : 0);

    // PIB per Capita
    printf("PIB per Capita: Carta %d venceu (%d)\n", (PPC1 > PPC2) ? 1 : 2, (PPC1 > PPC2) ? 1 : 0);


    return 0;
}