#include <stdio.h>

int main() {

    int numerador;
    int denominador;
    float valor_decimal;

    printf("Digite o numerador da fracao: \n");
    scanf("%d", &numerador);

    printf("Digite o denominador da fracao: \n");
    scanf("%d", &denominador);

    valor_decimal = (float) numerador / denominador;

    printf("O valor decimal da fracao %d/%d eh %.2f\n", numerador, denominador, valor_decimal);

    return 0;
}