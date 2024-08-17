#include <stdio.h>

int main() {
    float kg_pescado;
    
    // Leitura da quantidade de peixe pescado
    printf("Digite a quantidade de peixe pescado em kg: ");
    scanf("%f", &kg_pescado);
    
    // Calcula o excesso e a multa se necessário
    float excesso = (kg_pescado > 50) ? (kg_pescado - 50) : 0;
    float multa = excesso * 4;
    
    // Exibe o resultado
    printf("Excesso de peixe pescado: %.2f kg\n", excesso);
    printf("Valor da multa a pagar: R$ %.2f\n", multa);
    
    return 0;
}
