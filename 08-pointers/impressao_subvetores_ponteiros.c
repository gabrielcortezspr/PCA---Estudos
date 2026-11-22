/*
 * PROGRAMA: Impressão de Subvetores com Ponteiros
 * DESCRIÇÃO: Programa que cria 3 vetores dinâmicos, permite escolher intervalos
 *            específicos e os imprime usando ponteiros
 * CONCEITOS: Arrays dinâmicos, ponteiros, passagem por referência, 
 *            aritmética de ponteiros, intervalos de vetores
 * AUTOR: Estudos PCA
 * DATA: 07/03/2023
 */

#include <stdio.h>

// Variável global para controle dos loops (pode ser melhorada)
int i;

// Função que imprime um subvetor usando ponteiros
void imprime(float *inicio, float *final, int tamanho) {
    printf("(");
    for (i = 0; i < tamanho - 1; i++) {
        printf("%.2f, ", *(inicio + i));
    }
    printf("%.2f)\n", *(inicio + i));
}

int main() {
    int t1, t2, t3;
    int i1, i2, i3, f1, f2, f3;

    // === PRIMEIRO VETOR ===
    printf("Qual o tamanho do primeiro vetor? ");
    scanf("%d", &t1);
    
    float v1[t1];  // Array de tamanho dinâmico
    for (i = 0; i < t1; i++) {
        printf("Qual o %d valor do primeiro vetor? ", i + 1);
        scanf("%f", &v1[i]);
    }
    
    printf("Qual a posicao inicial do intervalo (0 a %d)? ", t1-1);
    scanf("%d", &i1);
    printf("E a posicao final? ");
    scanf("%d", &f1);
    
    printf("Primeiro vetor (intervalo %d a %d): ", i1, f1);
    imprime(&v1[i1], &v1[f1], f1 - i1 + 1);

    // === SEGUNDO VETOR ===
    printf("\nQual o tamanho do segundo vetor? ");
    scanf("%d", &t2);
    
    float v2[t2];
    for (i = 0; i < t2; i++) {
        printf("Qual o %d valor do segundo vetor? ", i + 1);
        scanf("%f", &v2[i]);
    }
    
    printf("Qual a posicao inicial do intervalo (0 a %d)? ", t2-1);
    scanf("%d", &i2);
    printf("E a posicao final? ");
    scanf("%d", &f2);
    
    printf("Segundo vetor (intervalo %d a %d): ", i2, f2);
    imprime(&v2[i2], &v2[f2], f2 - i2 + 1);

    // === TERCEIRO VETOR ===
    printf("\nQual o tamanho do terceiro vetor? ");
    scanf("%d", &t3);
    
    float v3[t3];
    for (i = 0; i < t3; i++) {
        printf("Qual o %d valor do terceiro vetor? ", i + 1);
        scanf("%f", &v3[i]);
    }
    
    printf("Qual a posicao inicial do intervalo (0 a %d)? ", t3-1);
    scanf("%d", &i3);
    printf("E a posicao final? ");
    scanf("%d", &f3);
    
    printf("Terceiro vetor (intervalo %d a %d): ", i3, f3);
    imprime(&v3[i3], &v3[f3], f3 - i3 + 1);

    return 0;
}
