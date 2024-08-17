#include <stdio.h>

int main() {
    float celsius;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    printf("Temperatura em Fahrenheit: %.2f\n", (celsius * 9 / 5) + 32);
    return 0;
}
