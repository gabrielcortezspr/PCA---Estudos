/*
 * PROGRAMA: Calculadora de Múltiplas Operações
 * DESCRIÇÃO: Programa que realiza três operações diferentes com três números:
 *            - Produto do primeiro com o segundo
 *            - Soma do triplo do primeiro com o terceiro
 *            - Terceiro número elevado ao cubo
 * CONCEITOS: Variáveis int e float, múltiplas operações matemáticas, potenciação
 * AUTOR: Estudos PCA
 * DATA: 15/12/2022
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num1, num2;
    float num3;
    float operacao1, operacao2, operacao3;
    
    printf("=== CALCULADORA DE MULTIPLAS OPERACOES ===\n\n");
    
    // Entrada dos números
    printf("Digite o primeiro numero (inteiro): ");
    scanf("%d", &num1);
    
    printf("Digite o segundo numero (inteiro): ");
    scanf("%d", &num2);
    
    printf("Digite o terceiro numero (real): ");
    scanf("%f", &num3);
    
    // Realização das operações
    operacao1 = num1 * num2;  // Produto do primeiro com o segundo
    operacao2 = (3 * num1) + num3;  // Triplo do primeiro + terceiro
    operacao3 = num3 * num3 * num3;  // Terceiro ao cubo (ou pow(num3, 3))
    
    // Exibição dos números informados
    printf("\n=== NUMEROS INFORMADOS ===\n");
    printf("Primeiro numero: %d\n", num1);
    printf("Segundo numero: %d\n", num2);
    printf("Terceiro numero: %.2f\n", num3);
    
    // Exibição dos resultados das operações
    printf("\n=== RESULTADOS DAS OPERACOES ===\n");
    printf("1. Produto do primeiro com o segundo: %d × %d = %.1f\n", 
           num1, num2, operacao1);
    printf("2. Soma do triplo do primeiro com o terceiro: (3 × %d) + %.2f = %.1f\n", 
           num1, num3, operacao2);
    printf("3. Terceiro numero elevado ao cubo: %.2f³ = %.1f\n", 
           num3, operacao3);
    
    // Informações adicionais
    printf("\n=== INFORMACOES ADICIONAIS ===\n");
    printf("Soma de todos os resultados: %.1f\n", operacao1 + operacao2 + operacao3);
    printf("Media dos resultados: %.2f\n", (operacao1 + operacao2 + operacao3) / 3);
    
    return 0;
}