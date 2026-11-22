/*
 * PROGRAMA: Sequência de Fibonacci
 * DESCRIÇÃO: Programa que calcula o número de Fibonacci na posição especificada
 * CONCEITOS: Funções, recursividade iterativa, sequência matemática
 * AUTOR: Estudos PCA
 * DATA: 05/01/2023
 */

#include <stdio.h>

int fibonacci(int posicao) {
    int i, resultado = 0, anterior1 = 1, anterior2 = 1, temp;
    
    if (posicao == 1 || posicao == 2) {
        return 1;
    }
    
    for (i = 1; i <= posicao - 2; i++) {
        temp = anterior1 + anterior2;
        anterior2 = anterior1;
        anterior1 = temp;
    }
    
    return anterior1;
}

int main() {
    int posicao, numeroFib;
    
    printf("=== CALCULADORA DE FIBONACCI ===\n\n");
    
    printf("Digite a posicao do numero de Fibonacci: ");
    scanf("%d", &posicao);
    
    while (posicao < 1) {
        printf("Erro: Apenas numeros positivos sao validos!\n");
        printf("Digite a posicao do numero de Fibonacci: ");
        scanf("%d", &posicao);
    }
    
    numeroFib = fibonacci(posicao);
    
    printf("\n=== RESULTADO ===\n");
    printf("O numero de Fibonacci na posicao %d eh: %d\n", posicao, numeroFib);
    
    return 0;
}