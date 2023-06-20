#include <stdio.h>

int main() {

    int segundos, horas, minutos, segundos_resto;

    printf("Digite um numero de segundos: \n");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    segundos_resto = segundos % 3600;
    minutos = segundos_resto / 60;
    segundos_resto = segundos_resto % 60;

    printf("%d segundos equivalem a %d horas, %d minutos e %d segundos.\n", segundos, horas, minutos, segundos_resto);

    return 0;
}