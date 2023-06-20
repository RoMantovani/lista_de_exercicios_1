#include <stdio.h>

int main() {

    int quantidadeDeAulas;
    float valorAula;
    float porcentagemDesconto;

    printf("Digite a quantidade de aulas dadas: \n");
    scanf("%d", &quantidadeDeAulas);

    printf("Digite o valor de hora aula: \n");
    scanf("%f", &valorAula);

    printf("Digite a porcentagem de desconto do INSS: \n");
    scanf("%f", &porcentagemDesconto);

    float salario = (quantidadeDeAulas * valorAula);
    float desconto = (salario * porcentagemDesconto) / 100;
    float salarioLiquido = salario - desconto;

    printf("O salario liquido eh: %.2f", salarioLiquido);

    return 0;
}