/*
 * PROGRAMA: Gerador de Tabuada
 * DESCRIÇÃO: Programa que gera e exibe a tabuada de um número de 0 a 9
 * CONCEITOS: Estruturas de repetição (for), multiplicação, formatação de saída
 * AUTOR: Estudos PCA
 * DATA: 22/12/2022
 */

#include <stdio.h>

int main() {
    int numero, contador;
    
    printf("=== GERADOR DE TABUADA ===\n\n");
    
    printf("Digite o numero para gerar a tabuada: ");
    scanf("%d", &numero);
    
    printf("\n=== TABUADA DO %d ===\n", numero);
    
    for (contador = 0; contador <= 9; contador++) {
        printf("%d x %d = %d\n", numero, contador, numero * contador);
    }
    
    printf("\n=== TABUADA COMPLETA! ===\n");
    
    return 0;
}