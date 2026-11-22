/*
 * PROGRAMA: Verificador de Número Primo
 * DESCRIÇÃO: Programa que verifica se um número é primo, contando
 *            quantos divisores ele possui
 * CONCEITOS: Estruturas de repetição (for), operador módulo,
 *            contadores, algoritmos matemáticos, números primos
 * AUTOR: Estudos PCA
 * DATA: 22/12/2022
 */

#include <stdio.h>

int main() {
    int numero, contador = 0, i;
    
    printf("=== VERIFICADOR DE NUMERO PRIMO ===\n\n");
    
    // Entrada do número
    printf("Digite um numero para verificar se e primo: ");
    scanf("%d", &numero);
    
    // Validação básica
    if (numero <= 1) {
        printf("Erro: Numeros menores ou iguais a 1 nao sao considerados primos!\n");
        return 1;
    }
    
    printf("\nVerificando divisores de %d:\n", numero);
    
    // Conta quantos divisores o número tem
    for (i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            contador++;
            printf("Divisor encontrado: %d\n", i);
        }
    }
    
    // Exibe resultado da análise
    printf("\n=== RESULTADO DA ANALISE ===\n");
    printf("Numero analisado: %d\n", numero);
    printf("Total de divisores: %d\n", contador);
    
    // Um número é primo se tem exatamente 2 divisores: 1 e ele mesmo
    if (contador == 2) {
        printf("Conclusao: %d E PRIMO!\n", numero);
        printf("Explicacao: Tem apenas 2 divisores (1 e %d)\n", numero);
    } else {
        printf("Conclusao: %d NAO E PRIMO!\n", numero);
        printf("Explicacao: Tem %d divisores (mais que 2)\n", contador);
    }
    
    // Informações educativas
    printf("\n=== INFORMACAO EDUCATIVA ===\n");
    printf("Um numero primo e aquele que possui exatamente 2 divisores:\n");
    printf("o numero 1 e ele proprio.\n");
    
    return 0;
}