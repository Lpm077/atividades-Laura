#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2;
    
    // Leitura dos n�meros
    printf("Digite o primeiro n�mero real: ");
    scanf("%f", &num1);
    printf("Digite o segundo n�mero real: ");
    scanf("%f", &num2);
    
    // C�lculos e exibi��o dos resultados
    printf("Produto do dobro do primeiro n�mero: %.2f\n", 2 * num1 * num1);
    printf("Soma do triplo do primeiro n�mero com a metade do segundo n�mero: %.2f\n", 3 * num1 + num2 / 2);
    printf("Raiz quadrada da soma dos dois n�meros: %.2f\n", sqrt(num1 + num2));
    
    return 0;
}
