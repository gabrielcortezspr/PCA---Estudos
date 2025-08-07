/*
 * PROGRAMA: Cálculo de Raiz Quadrada pelo Método de Newton
 * DESCRIÇÃO: Calcula a raiz quadrada de um número usando o método iterativo de Newton
 * CONCEITOS: Estruturas de repetição (do-while), validação de entrada, método de Newton
 * AUTOR: Estudos PCA
 * DATA: 22/12/2022
 */

#include <stdio.h>

int main() {
    float num, ap1, ap2, delta;

    // Solicita um número válido (não negativo)
    do {
        printf("Digite um numero para calcular a raiz quadrada (nao negativo): ");
        scanf("%f", &num);
        if (num < 0) {
            printf("Erro: Numero deve ser nao negativo!\n");
        }
    } while (num < 0);

    // Aproximação inicial: metade do número
    ap1 = num / 2;

    // Método de Newton para cálculo da raiz quadrada
    do {
        ap2 = ap1 - (ap1 * ap1 - num) / (2 * ap1);
        delta = ap2 - ap1;
        
        // Calcula o valor absoluto da diferença
        if (delta < 0) {
            delta = delta * (-1);
        }

        ap1 = ap2;
        
    } while (delta > 0.1);  // Precisão de 0.1

    printf("A raiz quadrada de %.2f eh aproximadamente: %.6f\n", num, ap1);

    return 0;
}