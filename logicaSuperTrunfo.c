#include <stdio.h>

int main() {

    char pais1[10] = "Irlanda";
    char pais2[10] = "Chile";

    unsigned long int populacao1 = 5380000;
    unsigned long int populacao2 = 19900000;

    float area1 = 70273;
    float area2 = 756096;

    float PIB1 = 500;
    float PIB2 = 670;

    int ptsTurismo1 = 250;
    int ptsTurismo2 = 153;

    float densPop1 = populacao1 / area1;
    float densPop2 = populacao2 / area2;

    int atributo1, atributo2;

    float valor1Carta1, valor1Carta2;
    float valor2Carta1, valor2Carta2;
    float somaCarta1, somaCarta2;

    printf("=== Super Trunfo - Comparacao de Dois Atributos ===\n\n");

    printf("Carta 1: %s\n", pais1);
    printf("Carta 2: %s\n\n", pais2);

    printf("Escolha o primeiro atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    scanf("%d", &atributo1);

    switch (atributo1) {
        case 1:
            valor1Carta1 = populacao1;
            valor1Carta2 = populacao2;
            break;

        case 2:
            valor1Carta1 = area1;
            valor1Carta2 = area2;
            break;

        case 3:
            valor1Carta1 = PIB1;
            valor1Carta2 = PIB2;
            break;

        case 4:
            valor1Carta1 = ptsTurismo1;
            valor1Carta2 = ptsTurismo2;
            break;

        case 5:
            valor1Carta1 = 1 / densPop1;
            valor1Carta2 = 1 / densPop2;
            break;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    printf("\nEscolha o segundo atributo:\n");

    if (atributo1 != 1) printf("1 - Populacao\n");
    if (atributo1 != 2) printf("2 - Area\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Pontos Turisticos\n");
    if (atributo1 != 5) printf("5 - Densidade Demografica\n");

    scanf("%d", &atributo2);

    if (atributo2 == atributo1) {
        printf("Erro: voce nao pode escolher o mesmo atributo duas vezes.\n");
        return 0;
    }

    switch (atributo2) {
        case 1:
            valor2Carta1 = populacao1;
            valor2Carta2 = populacao2;
            break;

        case 2:
            valor2Carta1 = area1;
            valor2Carta2 = area2;
            break;

        case 3:
            valor2Carta1 = PIB1;
            valor2Carta2 = PIB2;
            break;

        case 4:
            valor2Carta1 = ptsTurismo1;
            valor2Carta2 = ptsTurismo2;
            break;

        case 5:
            valor2Carta1 = 1 / densPop1;
            valor2Carta2 = 1 / densPop2;
            break;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    somaCarta1 = valor1Carta1 + valor2Carta1;
    somaCarta2 = valor1Carta2 + valor2Carta2;

    printf("\n=== Resultado da Comparacao ===\n");
    printf("Pais 1: %s\n", pais1);
    printf("Pais 2: %s\n\n", pais2);

    printf("Primeiro atributo - %s: %.2f\n", pais1, valor1Carta1);
    printf("Primeiro atributo - %s: %.2f\n", pais2, valor1Carta2);

    printf("Segundo atributo - %s: %.2f\n", pais1, valor2Carta1);
    printf("Segundo atributo - %s: %.2f\n", pais2, valor2Carta2);

    printf("\nSoma %s: %.2f\n", pais1, somaCarta1);
    printf("Soma %s: %.2f\n", pais2, somaCarta2);

    if (somaCarta1 == somaCarta2) {
        printf("\nEmpate!\n");
    } else {
        somaCarta1 > somaCarta2 ? printf("\n%s venceu!\n", pais1)
                                : printf("\n%s venceu!\n", pais2);
    }

    return 0;
}