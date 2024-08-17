#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2;
    
    // Leitura dos números
    printf("Digite o primeiro número real: ");
    scanf("%f", &num1);
    printf("Digite o segundo número real: ");
    scanf("%f", &num2);
    
    // Cálculos e exibição dos resultados
    printf("Produto do dobro do primeiro número: %.2f\n", 2 * num1 * num1);
    printf("Soma do triplo do primeiro número com a metade do segundo número: %.2f\n", 3 * num1 + num2 / 2);
    printf("Raiz quadrada da soma dos dois números: %.2f\n", sqrt(num1 + num2));
    
    return 0;
}
