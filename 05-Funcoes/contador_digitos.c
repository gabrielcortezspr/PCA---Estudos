/*
 * PROGRAMA: Contador de Dígitos em um Número
 * DESCRIÇÃO: Função que conta quantas vezes um dígito específico aparece em um número
 * CONCEITOS: Funções, operadores módulo e divisão, estruturas de repetição,
 *            manipulação de dígitos
 * AUTOR: Estudos PCA
 * DATA: 10/01/2023
 */

#include <stdio.h>

// Função que conta quantas vezes o dígito 'd' aparece no número 'n'
int contar(int n, int d) {
    int cont = 0;
    
    // Trata o caso especial onde n = 0
    if (n == 0 && d == 0) {
        return 1;
    }
    
    // Extrai cada dígito do número da direita para a esquerda
    while (n > 0) {
        if ((n % 10) == d) {  // Verifica se o último dígito é igual a 'd'
            cont++;
        }
        n = n / 10;  // Remove o último dígito
    }
    return cont;
}

int main() {
    int numero, digito, resultado;
    
    printf("=== CONTADOR DE DIGITOS ===\n\n");
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);
    
    printf("Digite o digito que deseja contar (0-9): ");
    scanf("%d", &digito);
    
    // Valida o dígito
    if (digito < 0 || digito > 9) {
        printf("Erro: Digite deve estar entre 0 e 9!\n");
        return 1;
    }
    
    resultado = contar(numero, digito);
    
    printf("\nResultado: O digito %d aparece %d vez(es) no numero %d\n", 
           digito, resultado, numero);
    
    return 0;
}
