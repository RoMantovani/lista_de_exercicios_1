#include <stdio.h>

int main() {
    float saldo, rendimento, novo_saldo;

    printf("Digite o saldo da aplicacao: \n");
    scanf("%f", &saldo);

    rendimento = saldo * 0.035;
    novo_saldo = saldo + rendimento;

    printf("O novo saldo da aplicacao com rendimento de 3,5%% eh: R$ %.2f\n", novo_saldo);

    return 0;
}