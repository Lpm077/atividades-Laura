#include <stdio.h>
#include <string.h>
#include <ctype.h>


#define MAX_TENTATIVAS 10
#define MAX_PALAVRA 11 // 10 letras + 1 para o terminador nulo

void mostrarEstado(char palavra[], char estado[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (estado[i] == 0) {
            printf("_ ");
        } else {
            printf("%c ", palavra[i]);
        }
    }
    printf("\n");
}

int verificarEstado(char estado[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (estado[i] == 0) {
            return 0; // Ainda há letras não adivinhadas
        }
    }
    return 1; // Todas as letras foram adivinhadas
}

int main() {
    char palavra[MAX_PALAVRA];
    char estado[MAX_PALAVRA];
    int tamanho;
    int vidas;
    char tentativa;
    int acertou;
    
    // Entrada da palavra
    printf("Digite a palavra secreta (até 10 letras): ");
    fgets(palavra, MAX_PALAVRA, stdin);
    
    // Remover o '\n' no final da string
    palavra[strcspn(palavra, "\n")] = 0;
    tamanho = strlen(palavra);
    
    if (tamanho > 10) {
        printf("A palavra é muito longa! Use no maximo 10 letras.\n");
        return 1;
    }
    
    // Inicializa o estado da palavra com zeros
    memset(estado, 0, tamanho * sizeof(char));
    
    // Calcula o número de vidas
    vidas = tamanho + 2;
    
    // Loop principal do jogo
    while (vidas > 0 && !verificarEstado(estado, tamanho)) {
        acertou = 0;
        
        // Mostrar o estado atual
        printf("Estado atual: ");
        mostrarEstado(palavra, estado, tamanho);
        printf("Vidas restantes: %d\n", vidas);
        
        // Recebe a tentativa do usuário
        printf("Digite uma letra: ");
        scanf(" %c", &tentativa);
        tentativa = tolower(tentativa); // Convertendo para minúscula para comparação
        
        // Verifica se a letra está na palavra
        for (int i = 0; i < tamanho; i++) {
            if (tolower(palavra[i]) == tentativa) {
                estado[i] = 1; // Marca a letra como encontrada
                acertou = 1;
            }
        }
        
        // Se a letra não foi encontrada, perde uma vida
        if (!acertou) {
            vidas--;
            printf("A letra '%c' nao esta na palavra.\n", tentativa);
        } else {
            printf("A letra '%c' esta na palavra!\n", tentativa);
        }
    }
    
    // Resultado final
    if (verificarEstado(estado, tamanho)) {
        printf("Parabens! Você adivinhou a palavra: %s\n", palavra);
    } else {
        printf("Voce perdeu! A palavra era: %s\n", palavra);
    }
    
    return 0;
}

