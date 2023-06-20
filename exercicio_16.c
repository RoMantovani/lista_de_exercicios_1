#include <stdio.h>

int main() {
    
    float tempo;
    float velocidade;
    float distancia;
    float litros;

    printf("Digite o tempo gasto na viagem (em horas): \n");
    scanf("%f", &tempo);
    printf("Digite a velocidade media (em km/h): \n");
    scanf("%f", &velocidade);

    distancia = tempo * velocidade;
    litros = distancia / 12;

    printf("Distancia percorrida: %.2f km\n", distancia);
    printf("Quantidade de litros gastos: %.2f L\n", litros);

    return 0;
}