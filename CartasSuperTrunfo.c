# include <stdio.h>

int main(){
    // Área das Variaveis
    char estado1, codigo1[4], nome1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontos_tur1;

    char estado2, codigo2[4], nome2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos_tur2;

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

    // Área de Demostração de Atributos das Cartas

    printf("\nCarta 1:\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", nome1);
    printf("População: %d \n", populacao1);
    printf("Área: %f \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Número de Pontos Turisticos: %d \n", pontos_tur1);


    printf("\nCarta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nome2);
    printf("População: %d \n", populacao2);
    printf("Área: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Número de Pontos Turisticos: %d \n", pontos_tur2);

    return 0;

}
