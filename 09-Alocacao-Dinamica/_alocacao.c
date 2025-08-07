/*
 * PROGRAMA: Soma de Matrizes com Alocação Dinâmica
 * DESCRIÇÃO: Programa que aloca dinamicamente duas matrizes, preenche com valores
 *            do usuário e calcula a soma das matrizes elemento por elemento
 * CONCEITOS: Alocação dinâmica bidimensional, ponteiros duplos, operações com matrizes
 * AUTOR: Estudos PCA
 * DATA: 2023
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, j, linhas, colunas;
    double **matriz1, **matriz2;
    
    printf("=== SOMA DE MATRIZES COM ALOCACAO DINAMICA ===\n\n");
    
    // Entrada das dimensões
    printf("Quantidade de linhas nas matrizes: ");
    scanf("%d", &linhas);
    printf("Quantidade de colunas nas matrizes: ");
    scanf("%d", &colunas);
    
    // Validação
    if (linhas <= 0 || colunas <= 0) {
        printf("Erro: Dimensões devem ser positivas!\n");
        return 1;
    }
    
    // Alocação dinâmica da primeira matriz
    matriz1 = (double**) malloc(linhas * sizeof(double*));
    for (i = 0; i < linhas; i++) {
        *(matriz1 + i) = (double*) malloc(colunas * sizeof(double));
    }
    
    // Alocação dinâmica da segunda matriz
    matriz2 = (double**) malloc(linhas * sizeof(double*));
    for (i = 0; i < linhas; i++) {
        *(matriz2 + i) = (double*) malloc(colunas * sizeof(double));
    }
    
    // Preenchimento da primeira matriz
    printf("\n=== PREENCHIMENTO DA PRIMEIRA MATRIZ ===\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("Digite o valor da primeira matriz em [%d][%d]: ", i, j);
            scanf("%lf", (*(matriz1 + i) + j));
        }
    }
    
    // Preenchimento da segunda matriz
    printf("\n=== PREENCHIMENTO DA SEGUNDA MATRIZ ===\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("Digite o valor da segunda matriz em [%d][%d]: ", i, j);
            scanf("%lf", (*(matriz2 + i) + j));
        }
    }
    
    // Exibição do resultado da soma
    printf("\n=== RESULTADO DA SOMA DAS MATRIZES ===\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%.1lf ", (*(*(matriz1 + i) + j) + *(*(matriz2 + i) + j)));
        }
        printf("\n");
    }
    
    // Liberação da memória
    for (i = 0; i < linhas; i++) {
        free(*(matriz1 + i));
        free(*(matriz2 + i));
    }
    free(matriz1);
    free(matriz2);
    
    printf("\nMemoria liberada com sucesso!\n");
    
    return 0;
}
