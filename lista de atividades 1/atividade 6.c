#include <stdio.h>

int main() {
    float tempo, velocidade;
    printf("Tempo (horas): ");
    scanf("%f", &tempo);
    printf("Velocidade (km/h): ");
    scanf("%f", &velocidade);
    printf("Litros de gasolina: %.2f L\n", (tempo * velocidade) / 12.0);
    return 0;
}
