#include <stdio.h>

int main() {
    char estado1[30], estado2[30]; 
    char codigo1[10], codigo2[10];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float PIB1, PIB2;
    float area1, area2;
    float PPC1, PPC2; // PIB per capita 
    float DP1, DP2;  // densidade populacional 

    // Primeira cidade
    printf("Digite o primeiro estado:\n");
    scanf("%s", estado1);

    printf("Digite o codigo do primeiro estado:\n");
    scanf("%s", codigo1);

    printf("Digite o nome da capital do primeiro estado:\n");
    scanf("%s", cidade1);

    printf("Digite o valor da população com numero inteiro (sem o uso de vírgula e espaço) do primeiro estado:\n");
    scanf("%d", &populacao1);

    printf("Digite o valor do PIB do primeiro estado:\n");
    scanf("%f", &PIB1);

    printf("Digite quantos km² tem seu primeiro estado:\n");
    scanf("%f", &area1);

    printf("Digite quantos pontos turisticos existem no primeiro estado:\n");
    scanf("%d", &pontos_turisticos1);

    // Cálculos para a primeira cidade
    PPC1 = PIB1 / populacao1;
    DP1 = (float) populacao1 / area1;

    // Segunda cidade
    printf("Digite o segundo estado:\n");
    scanf("%s", estado2);

    printf("Digite o codigo do segundo estado:\n");
    scanf("%s", codigo2);

    printf("Digite o nome da capital do segundo estado:\n");
    scanf("%s", cidade2);

    printf("Digite o valor da população com numero inteiro (sem o uso de vírgula e espaço) do segundo estado:\n");
    scanf("%d", &populacao2);

    printf("Digite o valor do PIB do segundo estado:\n");
    scanf("%f", &PIB2);

    printf("Digite quantos km² tem seu segundo estado:\n");
    scanf("%f", &area2);

    printf("Digite quantos pontos turisticos existem no segundo estado:\n");
    scanf("%d", &pontos_turisticos2);

    // Cálculos para a segunda cidade
    PPC2 = PIB2 / populacao2;
    DP2 = (float) populacao2 / area2;

    // Exibição dos resultados
    printf("\nResultados para %s (%s):\n", estado1, codigo1);
    printf("PIB per capita: %.2f\n", PPC1);
    printf("Densidade populacional: %.2f hab/km²\n", DP1);

    printf("\nResultados para %s (%s):\n", estado2, codigo2);
    printf("PIB per capita: %.2f\n", PPC2);
    printf("Densidade populacional: %.2f hab/km²\n", DP2);

    return 0;
}