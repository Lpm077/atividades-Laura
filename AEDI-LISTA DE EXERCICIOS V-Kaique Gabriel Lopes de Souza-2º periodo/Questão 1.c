#include <stdio.h>                     

int soma(int n) {
	if (n <= 0) return 0;
	return n + soma(n - 1);
	
}
int main() {
	int numero;
	printf("digite um numero: ");
	scanf("%d", &numero);
	printf("soma de 1 ate %d: %d\n", numero, soma(numero));
	return 0;
	
}
