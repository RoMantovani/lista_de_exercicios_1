#include <stdio.h>

int main() {

    float valor, taxa, tempo, prestacao;

    printf("Digite o valor original da prestacao: \n");
    scanf("%f", &valor);

    printf("Digite a taxa de juros em %% ao dia: \n");
    scanf("%f", &taxa);

    printf("Digite o tempo em dias de atraso: \n");
    scanf("%f", &tempo);

    prestacao = valor + (valor * taxa / 100 * tempo);

    printf("O valor da prestacao atrasada eh: R$%.2f\n", prestacao);

    return 0;
}