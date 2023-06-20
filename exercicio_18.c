#include <iostream>

int main() {

    int a, b, c;

    printf("Digite o valor de A\n");
    scanf("%d", &a);

    printf("Digite o valor de B\n");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("Valor trocado para A: %d\n", a);
    printf("Valor trocado para B: %d\n", b);

    return 0;

}