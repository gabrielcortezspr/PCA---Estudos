/*
 * PROGRAMA: Cálculo de Média de 4 Notas
 * DESCRIÇÃO: Programa que solicita 4 notas ao usuário e calcula a média aritmética
 * CONCEITOS: Variáveis float, entrada/saída, operações aritméticas, formatação de saída
 * AUTOR: Estudos PCA
 * DATA: 15/12/2022
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    float nota1, nota2, nota3, nota4, media;

    // Solicita as 4 notas
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    printf("Digite a nota 4: ");
    scanf("%f", &nota4);

    // Calcula a média aritmética
    media = (nota1 + nota2 + nota3 + nota4) / 4;

    // Exibe o resultado formatado
    printf("Sua media eh: %.2f\n", media);
    
    return 0;
}

