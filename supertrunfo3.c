#include <stdio.h>
int main () {
    // carta1
    //declarar variáveis
    char estado1[50];
    char codigocarta1[5];
    char cidade1[50];
    unsigned int populacao1;
    float area1;
    float pib1;
    int turisticos1;
    float denspop1;
    float pibpercap1;
    
    printf("Digite o estado: \n");
    scanf("%s", &estado1);
    printf("Digite o código da carta: \n");
    scanf("%s", &codigocarta1);
    printf("Digite a cidade: \n");
    scanf("%s", &cidade1);
    printf("Digite a população: \n");
    scanf("%u", &populacao1);
    printf("Digite a área: \n");
    scanf("%f", &area1);
    printf("Digite o pib: \n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turisticos1);

    //área de cálculo
    denspop1 = populacao1 / area1;
    pibpercap1 = pib1 / populacao1;

    printf("A densidade populacional é: %.2f \n", denspop1);
    printf("O pib per capita é: %.2f \n", pibpercap1);


    // carta2
    //declarar variáveis
    char estado2[50];
    char codigocarta2[5];
    char cidade2[50];
    unsigned int populacao2;
    float area2;
    float pib2;
    int turisticos2;
    float denspop2;
    float pibpercap2;
    
    printf("Digite o estado: \n");
    scanf("%s", &estado2);
    printf("Digite o código da carta: \n");
    scanf("%s", &codigocarta2);
    printf("Digite a cidade: \n");
    scanf("%s", &cidade2);
    printf("Digite a população: \n");
    scanf("%u", &populacao2);
    printf("Digite a área: \n");
    scanf("%f", &area2);
    printf("Digite o pib: \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turisticos2);

    //área de cálculo
    denspop2 = populacao2 / area2;
    pibpercap2 = pib2 / populacao2;

    printf("A densidade populacional é: %.2f \n", denspop2);
    printf("O pib per capita é: %.2f \n", pibpercap2);

    //comparações
    if (populacao1 > populacao2)
        printf("Carta 1 vence\n");
    else
        printf("Carta 2 vence\n");

   if (area1 > area2)
        printf("Carta 1 vence\n");
    else
        printf("Carta 2 vence\n");

    if (pib1 > pib2)
        printf("Carta 1 vence\n");
    else
        printf("Carta 2 vence\n");

    if (turisticos1 > turisticos2)
        printf("Carta 1 vence\n");
    else
        printf("Carta 2 vence\n");

    if (denspop1 < denspop2)
        printf("Carta 1 vence\n");
    else
        printf("Carta 2 vence\n");

    if (pibpercap1 > pibpercap2)
        printf("Carta 1 vence\n");
    else
        printf("Carta 2 vence\n");

}
