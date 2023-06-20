#include <stdio.h>

int main() {

    float salario_minimo, qtd_quilowatts, valor_quilowatt, valor_total, valor_com_desconto;

    printf("Digite o valor do salario minimo: \n");
    scanf("%f", &salario_minimo);

    printf("Digite a quantidade de quilowatts gasta: \n");
    scanf("%f", &qtd_quilowatts);

    valor_quilowatt = (salario_minimo / 7) / 100;
    valor_total = valor_quilowatt * qtd_quilowatts;
    valor_com_desconto = valor_total * 0.9;

    printf("O valor em Reais do quilowatt eh R$ %.2f\n", valor_quilowatt);
    printf("O valor em Reais a ser pago eh R$ %.2f\n", valor_total);
    printf("O valor a ser pago com 10%% de desconto eh R$ %.2f\n", valor_com_desconto);

    return 0;
}