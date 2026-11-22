/*
 * PROGRAMA: Impressão de Vetor em Ordem Inversa
 * DESCRIÇÃO: Programa que lê uma sequência de números e os imprime em ordem inversa
 * CONCEITOS: Arrays (vetores), estruturas de repetição (for), entrada/saída
 * AUTOR: Estudos PCA
 * DATA: 24/01/2023
 */

#include <stdio.h>

#define LIM 100  // Define o limite máximo do vetor

int main() {
    int n, i;
    int numeros[LIM];

    printf("=== IMPRESSAO DE VETOR EM ORDEM INVERSA ===\n\n");
    
    // Lê o tamanho da sequência
    printf("Digite o tamanho da sequencia (max %d): ", LIM);
    scanf("%d", &n);
    
    // Valida o tamanho
    if (n <= 0 || n > LIM) {
        printf("Erro: Tamanho deve estar entre 1 e %d!\n", LIM);
        return 1;
    }

    // Lê os elementos do vetor
    printf("\nEntre com %d elementos:\n", n);
    for (i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    // Imprime os elementos em ordem inversa
    printf("\nOrdem original: ");
    for (i = 0; i < n; i++) {
        printf("%d ", numeros[i]);
    }
    
    printf("\nOrdem inversa: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
    
    return 0;
}
