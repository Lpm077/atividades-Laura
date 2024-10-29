#include <stdio.h>       
#include <locale.h>

// Função recursiva para calcular o n-ésimo termo da sequência de Fibonacci
int fibonacci(int n) {
    return (n <= 1) ? n : fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    printf("O désimo termo da sequência de Fibonacci é: %d\n", n, fibonacci(n));
    return 0;
}
