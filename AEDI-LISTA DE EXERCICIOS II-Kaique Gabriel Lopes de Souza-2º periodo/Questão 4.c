#include <stdio.h>
#include <locale.h>

int main () {
setlocale(LC_ALL, "Portuguese");
	int lista [] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
	
	int tamanho = 25;
	int valor_procurado, meio;
	int inicio = 0;
	int fim = tamanho-1;
	
	int controle = -1;
	
	printf ("Digite o valor buscado: ");
	scanf ("%d", &valor_procurado);
	
	while(inicio <= fim) {
		meio = (inicio+fim) /2; 
		
		if (lista[meio] == valor_procurado){
			controle = meio;
			break;
		}else if (lista [meio]<valor_procurado){
			inicio = meio+1;
		}else { fim= meio -1;
	}
}
	
	if (controle== -1){
		printf("O valor não foi encontrado!");
	}else{
		printf("O valor foi encontrado!");
	}
	return 0;
}
