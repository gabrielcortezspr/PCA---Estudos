/*
 * PROGRAMA: Multiplicação de Matriz por Escalar
 * DESCRIÇÃO: Programa que lê uma matriz 3x3, multiplica por um escalar k
 *            e exibe tanto a matriz original quanto o resultado
 * CONCEITOS: Matrizes bidimensionais, loops aninhados, multiplicação escalar
 * AUTOR: Estudos PCA
 * DATA: 26/01/2023
 */

#include <stdio.h>

int main() {
    int matriz[3][3];
    int k;
    int linha, coluna;

    printf("=== MULTIPLICACAO DE MATRIZ POR ESCALAR ===\n\n");

    // Leitura dos valores da matriz
    printf("Digite os valores da matriz 3x3:\n");
    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            printf("Elemento [%d][%d]: ", linha + 1, coluna + 1);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    // Leitura do escalar
    printf("\nDigite o valor do escalar k: ");
    scanf("%d", &k);

    // Exibição da matriz original
    printf("\n=== MATRIZ ORIGINAL ===\n");
    for (linha = 0; linha < 3; linha++) {
        printf("| ");
        for (coluna = 0; coluna < 3; coluna++) {
            printf("%4d ", matriz[linha][coluna]);
        }
        printf("|\n");
    }

    // Multiplicação e exibição da matriz resultante
    printf("\n=== MATRIZ MULTIPLICADA POR %d ===\n", k);
    for (linha = 0; linha < 3; linha++) {
        printf("| ");
        for (coluna = 0; coluna < 3; coluna++) {
            matriz[linha][coluna] = matriz[linha][coluna] * k;
            printf("%4d ", matriz[linha][coluna]);
        }
        printf("|\n");
    }

    return 0;
}
