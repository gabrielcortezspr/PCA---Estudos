/*
 * PROGRAMA: Soma de Dois Números Inteiros
 * DESCRIÇÃO: Programa básico que solicita dois números inteiros ao usuário e calcula sua soma
 * CONCEITOS: Entrada/saída básica, variáveis, operações aritméticas
 * AUTOR: Estudos PCA
 * DATA: 15/12/2022
 */

#include <stdio.h>

int main() {
    int num1, num2, soma;
    
    // Solicita o primeiro número
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    
    // Solicita o segundo número
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    // Calcula a soma
    soma = num1 + num2;
    
    // Exibe o resultado
    printf("A soma de %d + %d = %d\n", num1, num2, soma);
    
    return 0;
}
