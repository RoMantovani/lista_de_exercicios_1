#include <stdio.h>

int main() {

    float gastos;
    float gorjeta;
    float total;

    printf("Digite o valor dos gastos: R$ \n");
    scanf("%f", &gastos);

    gorjeta = gastos * 0.1;
    total = gastos + gorjeta;

    printf("Valor inicial: R$ %.2f\n", gastos);
    printf("Gorjeta (10%%): R$ %.2f\n", gorjeta);
    printf("Valor total: R$ %.2f\n", total);

    return 0;
}