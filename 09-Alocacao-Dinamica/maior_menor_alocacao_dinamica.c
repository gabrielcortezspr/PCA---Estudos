
/*
 * PROGRAMA: Maior e Menor Valores com Alocação Dinâmica
 * DESCRIÇÃO: Programa que demonstra alocação dinâmica de memória para encontrar
 *            maior e menor valores em um vetor de tamanho definido pelo usuário
 * CONCEITOS: Alocação dinâmica (malloc/free), ponteiros, passagem por referência,
 *            manipulação de vetores dinâmicos
 * AUTOR: Estudos PCA
 * DATA: 16/03/2023
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int i;  // Variável global para controle de loops

// Função para ler valores e alocar vetor dinamicamente
int *le(int *vetor, int *n) {
    printf("Quantos valores serao colocados no vetor? ");
    scanf("%d", n);
    
    // Aloca memória dinamicamente para n inteiros
    vetor = (int*) malloc(*n * sizeof(int));
    
    // Verifica se a alocação foi bem-sucedida
    if (vetor == NULL) {
        printf("Erro: Nao foi possivel alocar memoria!\n");
        exit(1);
    }
    
    // Lê os valores do usuário
    for (i = 0; i < *n; i++) {
        printf("Qual sera o valor do %d numero? ", i + 1);
        scanf("%d", (vetor + i));
    }
    
    return vetor;
}

// Função para encontrar maior e menor valores no vetor
void mm(int *vetor, int *maior, int *menor, int *tamanho) {
    // Inicializa maior e menor com o primeiro elemento
    *maior = *vetor;
    *menor = *vetor;
    
    // Percorre o restante do vetor
    for (i = 1; i < *tamanho; i++) {
        if (*(vetor + i) > *maior) {
            *maior = *(vetor + i);
        }
        if (*(vetor + i) < *menor) {
            *menor = *(vetor + i);
        }    
    }
}

int main() {
    int *vetor, n, maior, menor;
    
    // Lê valores e aloca vetor
    vetor = le(vetor, &n);
    
    // Encontra maior e menor valores
    mm(vetor, &maior, &menor, &n);
    
    // Exibe os resultados
    printf("\n=== RESULTADOS ===\n");
    printf("O maior valor eh: %d\n", maior);
    printf("O menor valor eh: %d\n", menor);
    printf("Diferenca entre maior e menor: %d\n", maior - menor);
    
    // Libera a memória alocada
    free(vetor);
    printf("\nMemoria liberada com sucesso!\n");
    
    return 0;
}
