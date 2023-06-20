#include <stdio.h>

int main() {
    float valor_produto, porcentagem_desconto, valor_com_desconto;

    printf("Digite o valor do produto: \n");
    scanf("%f", &valor_produto);

    printf("Digite a porcentagem de desconto: \n");
    scanf("%f", &porcentagem_desconto);

    valor_com_desconto = valor_produto - (valor_produto * (porcentagem_desconto/100));

    printf("O valor com desconto eh: R$%.2f\n", valor_com_desconto);

    return 0;
}