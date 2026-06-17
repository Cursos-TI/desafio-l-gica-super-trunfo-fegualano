#include <stdio.h>

int main(){

    char pais1 [10] = "Irlanda";
    char pais2 [10] = "Chile";
    unsigned long int populacao1 = 5380000;
    unsigned long int populacao2 = 19900000;
    float area1 = 70273;
    float area2 = 756096;
    float PIB1 = 500; // bilhões
    float PIB2 = 670; // bilhões
    int ptsTurismo1 = 250;
    int ptsTurismo2 = 153;
    float densPop1 = populacao1 / area1;
    float densPop2 = populacao2 / area2;
    int opcao;

    printf("Escolha o atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");

scanf("%d", &opcao);


    switch(opcao){

case 1:
    printf("\nComparacao por Populacao\n");

    printf("%s: %lu habitantes\n", pais1, populacao1);
    printf("%s: %lu habitantes\n", pais2, populacao2);

    if (populacao1 > populacao2){
        printf("%s venceu!\n", pais1);
    }
    else if (populacao2 > populacao1){
        printf("%s venceu!\n", pais2);
    }
    else{
        printf("Empate!\n");
    }
    break;

case 2:
    printf("\nComparacao por Area\n");

    printf("%s: %.2f km²\n", pais1, area1);
    printf("%s: %.2f km²\n", pais2, area2);

    if (area1 > area2){
        printf("%s venceu!\n", pais1);
    }
    else if (area2 > area1){
        printf("%s venceu!\n", pais2);
    }
    else{
        printf("Empate!\n");
    }
    break;

case 3:
    printf("\nComparacao por PIB\n");

    printf("%s: %.2f bilhoes\n", pais1, PIB1);
    printf("%s: %.2f bilhoes\n", pais2, PIB2);

    if (PIB1 > PIB2){
        printf("%s venceu!\n", pais1);
    }
    else if (PIB2 > PIB1){
        printf("%s venceu!\n", pais2);
    }
    else{
        printf("Empate!\n");
    }
    break;

case 4:
    printf("\nComparacao por Pontos Turisticos\n");

    printf("%s: %d pontos\n", pais1, ptsTurismo1);
    printf("%s: %d pontos\n", pais2, ptsTurismo2);

    if (ptsTurismo1 > ptsTurismo2){
        printf("%s venceu!\n", pais1);
    }
    else if (ptsTurismo2 > ptsTurismo1){
        printf("%s venceu!\n", pais2);
    }
    else{
        printf("Empate!\n");
    }
    break;

case 5:
    printf("\nComparacao por Densidade Demografica\n");

    printf("%s: %.2f hab/km²\n", pais1, densPop1);
    printf("%s: %.2f hab/km²\n", pais2, densPop2);

    if (densPop1 < densPop2){
        printf("%s venceu!\n", pais1);
    }
    else if (densPop2 < densPop1){
        printf("%s venceu!\n", pais2);
    }
    else{
        printf("Empate!\n");
    }
    break;

default:
    printf("Opcao invalida!\n");
    break;
}

return 0;
}