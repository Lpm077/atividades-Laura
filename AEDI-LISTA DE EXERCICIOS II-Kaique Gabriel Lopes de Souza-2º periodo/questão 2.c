#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_CRIANCAS 50
#define MIN_NOTA 1
#define MAX_NOTA 5

void contarNotas(int notas[], int contagem[], int tamanho) {
    // Inicializa o array de contagem com zeros
    for (int i = MIN_NOTA; i <= MAX_NOTA; i++) {
        contagem[i] = 0;
    }

    // Contar a frequ�ncia de cada nota
    for (int i = 0; i < tamanho; i++) {
        contagem[notas[i]]++;
    }
}

void exibirContagem(int contagem[]) {
    printf("Contagem de notas:\n");
    for (int i = MIN_NOTA; i <= MAX_NOTA; i++) {
        printf("Nota %d: %d vezes\n", i, contagem[i]);
    }
}

int main() {
    int notas[NUM_CRIANCAS];
    int contagem[MAX_NOTA + 1]; // Array para armazenar a contagem de cada nota
    srand(time(NULL)); // Inicializa a semente para n�meros rand�micos

    // Gera notas rand�micas para 50 crian�as
    for (int i = 0; i < NUM_CRIANCAS; i++) {
        notas[i] = rand() % (MAX_NOTA - MIN_NOTA + 1) + MIN_NOTA;
    }

    // Conta a frequ�ncia de cada nota
    contarNotas(notas, contagem, NUM_CRIANCAS);

    // Exibe a contagem de cada nota
    exibirContagem(contagem);

    return 0;
}

