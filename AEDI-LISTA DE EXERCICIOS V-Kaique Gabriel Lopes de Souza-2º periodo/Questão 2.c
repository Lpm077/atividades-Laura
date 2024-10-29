#include <stdio.h>
            
#include <stdlib.h>

// Função pra ceiqr o array com progreção aritimertica
void criarPA(int* array, int n, int inicial, int razao) {
    for (int i = 0; i < n; i++) {
        array[i] = inicial + i * razao;
    }
}

// Funçãozia pra imprimir valores
void imprimirArray(int* array, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int n, inicial, razao;

    // Lendo valores
    printf("Quantidade de elementos: ");
    scanf("%d", &n);
    printf("Valor inicial: ");
    scanf("%d", &inicial);
    printf("Razão: ");
    scanf("%d", &razao);

    // Alocando o array
    int* array = malloc(n * sizeof(int));

    // Criando array de impressão
    criarPA(array, n, inicial, razao);
    imprimirArray(array, n);

    // Liberação da memória alocada
    free(array);

    return 0;
}
