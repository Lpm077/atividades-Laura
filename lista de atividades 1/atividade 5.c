#include <stdio.h>

int main() {
    float custo_fabrica;
    printf("Digite o custo de f�brica: R$ ");
    scanf("%f", &custo_fabrica);
    printf("Custo final: R$ %.2f\n", custo_fabrica * 2.073);
    return 0;
}
