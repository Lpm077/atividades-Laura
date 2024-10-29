#include <stdio.h>   
#include <locale.h>     

// Função para retornar o maior de três números
int maiorDeTres(int a, int b, int c) {
    return (a > b && a > c) ? a : (b > c) ? b : c;
}

int main() {
	setlocale (LC_ALL, "Portuguese");
    int num1, num2, num3;
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("O maior número é: %d\n", maiorDeTres(num1, num2, num3));
    return 0;
}
