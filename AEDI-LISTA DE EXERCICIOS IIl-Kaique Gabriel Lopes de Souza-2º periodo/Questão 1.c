#include <stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    int i, j;
    char temp;
    int tamanho;

    
    printf("Digite a quantidade de letras que você quer inserir: ");
    scanf("%d", &tamanho);  

    char letras[tamanho];  

    
    printf("Digite %d letras: ", tamanho);
    for (i = 0; i < tamanho; i++) {
        scanf(" %c", &letras[i]);  
    }

    
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (letras[j] > letras[j + 1]) {
                
                temp = letras[j];
                letras[j] = letras[j + 1];
                letras[j + 1] = temp;
            }
        }
    }

    
    printf("Letras em ordem alfabética: ");
    for (i = 0; i < tamanho; i++) {
        printf("%c ", letras[i]);  
    }
    printf("\n");

    return 0;
}

