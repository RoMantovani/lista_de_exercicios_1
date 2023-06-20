#include <stdio.h>

int main() {
    float altura, raio, volume;
    const float PI = 3.14159;

    printf("Digite a altura da lata: \n");
    scanf("%f", &altura);

    printf("Digite o raio da lata: \n");
    scanf("%f", &raio);

    volume = PI * raio * raio * altura;

    printf("O volume da lata eh: %.2f\n", volume);

    return 0;
}