#include <stdio.h>           
#include <locale.h>

int busca_Binaria(int array[], int inicio, int fim, int valor) {
    if (inicio > fim) return -1;
    int meio = inicio + (fim - inicio) / 2;
    if (array[meio] == valor) return meio;
    if (array[meio] > valor) return busca_Binaria(array, inicio, meio - 1, valor);
    return busca_Binaria(array, meio + 1, fim, valor);
}

int main() {
	setlocale (LC_ALL, "Portuguese");
    int array[] = {1, 4, 7, 8, 10, 11, 14, 16, 18, 25};
    int n = sizeof(array) / sizeof(array[0]);
    int valor;

    printf("Digite o valor a ser buscado: ");
    scanf("%d", &valor);

    int resultado = busca_Binaria(array, 0, n - 1, valor);

    if (resultado != -1) {
        printf("Elemento encontrado no índice: %d\n", resultado);
    } else {
        printf("Elemento não encontrado.\n");
    }

    return 0;
}
