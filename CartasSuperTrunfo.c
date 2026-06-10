# include <stdio.h>

int main(){
    // Área das Variaveis

    char estado1, codigo1[4], nome1[20];
    int populacao1, pontos_tur1;
    float area1, pib1;
    float Dencidade1, pibPcapita1;

    char estado2, codigo2[4], nome2[20];
    int populacao2, pontos_tur2;
    float area2, pib2;
    float Dencidade2, pibPcapita2;

    // Área de catalogação das cartas

    printf("Dados da carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Codigo: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("População da cidade: ");
    scanf("%d", &populacao1);
    printf("Área da cidade: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de pontos turisticos: ");
    scanf("%d", &pontos_tur1);
    

    printf("\nDados da carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Codigo: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("População da cidade: ");
    scanf("%d", &populacao2);
    printf("Área da cidade: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos turisticos: ");
    scanf("%d", &pontos_tur2);

    //Calculos

    Dencidade1 = (float) populacao1 / area1;
    pibPcapita1 = (pib1 * 1000000000.0) / populacao1;

    Dencidade2 = (float) populacao2 / area2;
    pibPcapita2 = (pib2 * 1000000000.0) / populacao2;


    // Área de Demostração de Atributos das Cartas

    printf("\nCarta 1:\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", nome1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turisticos: %d \n", pontos_tur1);
    printf("Densidade Populacional: %.2f hab/km² \n", Dencidade1);
    printf("PIB per Capita: %.2f reais \n", pibPcapita1);


    printf("\nCarta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nome2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turisticos: %d \n", pontos_tur2);
    printf("Densidade Populacional: %.2f hab/km² \n", Dencidade2);
    printf("PIB per Capita: %.2f reais \n", pibPcapita2);


    return 0;

}
