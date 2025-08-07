/*
 * PROGRAMA: Conversor de Binário para Decimal
 * DESCRIÇÃO: Programa que converte um número binário para decimal usando função
 * CONCEITOS: Funções, conversão de base, potenciação, loops while
 * AUTOR: Estudos PCA
 * DATA: 2023
 */

#include <stdio.h>
#include <math.h>

// Função que converte binário para decimal
int binarioParaDecimal(int numeroBinario) {
    int expoente = 0, resto = 0, decimal = 0;
    int binarioOriginal = numeroBinario;
    
    printf("Convertendo %d (binario) para decimal:\n", binarioOriginal);
    
    while (numeroBinario > 0) {
        resto = numeroBinario % 10;
        
        // Verifica se é um dígito binário válido
        if (resto != 0 && resto != 1) {
            printf("Erro: %d nao e um numero binario valido!\n", binarioOriginal);
            return -1;
        }
        
        numeroBinario = numeroBinario / 10;
        decimal += resto * (pow(2, expoente));
        
        printf("Digito %d na posicao %d: %d x 2^%d = %d\n", 
               resto, expoente, resto, expoente, (int)(resto * pow(2, expoente)));
        
        expoente++;
    }
    
    return decimal;
}

int main() {
    int numeroBinario, resultado;
    
    printf("=== CONVERSOR BINARIO PARA DECIMAL ===\n\n");
    
    printf("Digite o numero binario: ");
    scanf("%d", &numeroBinario);
    
    if (numeroBinario < 0) {
        printf("Erro: Digite apenas numeros positivos!\n");
        return 1;
    }
    
    resultado = binarioParaDecimal(numeroBinario);
    
    if (resultado != -1) {
        printf("\n=== RESULTADO ===\n");
        printf("%d (binario) = %d (decimal)\n", numeroBinario, resultado);
    }
    
    return 0;
}
