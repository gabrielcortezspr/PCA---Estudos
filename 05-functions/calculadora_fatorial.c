/*
 * PROGRAMA: Calculadora de Fatorial
 * DESCRIÇÃO: Programa que calcula o fatorial de um número usando função
 * CONCEITOS: Funções, validação de entrada, estruturas de repetição, fatorial
 * AUTOR: Estudos PCA
 * DATA: 05/01/2023
 */

#include <stdio.h>

// Função que calcula o fatorial de um número
long long calcularFatorial(int numero) {
    long long fatorial = 1;
    int i;
    
    printf("\nCalculando %d!:\n", numero);
    
    for (i = 1; i <= numero; i++) {
        fatorial *= i;
        printf("%d! = %d", i, (int)(fatorial));
        if (i < numero) {
            printf(" (proximo: %d * %lld)\n", i + 1, fatorial);
        } else {
            printf(" (resultado final)\n");
        }
    }
    
    return fatorial;
}

int main() {
    int numero;
    long long resultado;
    
    printf("=== CALCULADORA DE FATORIAL ===\n\n");
    printf("O fatorial de n (n!) e o produto de todos os numeros de 1 ate n.\n\n");
    
    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &numero);
    
    // Validação da entrada
    while (numero < 0) {
        printf("Erro: Numeros negativos nao possuem fatorial!\n");
        printf("Digite um valor valido (>= 0): ");
        scanf("%d", &numero);
    }
    
    // Caso especial para 0! = 1
    if (numero == 0) {
        printf("\n=== RESULTADO ===\n");
        printf("0! = 1 (por definicao)\n");
        return 0;
    }
    
    // Calcula o fatorial
    resultado = calcularFatorial(numero);
    
    // Exibe o resultado final
    printf("\n=== RESULTADO FINAL ===\n");
    printf("O fatorial de %d eh: %lld\n", numero, resultado);
    
    // Informações adicionais
    printf("\n=== INFORMACOES ===\n");
    printf("Formula: %d! = 1 x 2 x 3 x ... x %d\n", numero, numero);
    
    if (numero > 12) {
        printf("Aviso: Para numeros maiores que 12, o resultado pode\n");
        printf("exceder a capacidade do tipo de dados!\n");
    }
    
    return 0;
}
