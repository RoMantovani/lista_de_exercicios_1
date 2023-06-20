#include <stdio.h>

int main() {

    float raio, perimetro, area;
    const float PI = 3.14;

    printf("Digite o raio do circulo: \n");
    scanf("%f", &raio);

    perimetro = 2 * PI * raio;
    area = PI * raio * raio;

    printf("O perimetro do circulo eh: %.2f\n", perimetro);
    printf("A area do circulo eh: %.2f\n", area);

    return 0;
}