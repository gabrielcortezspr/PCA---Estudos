/*
 * PROGRAMA: Soma de Cinco Números
 * DESCRIÇÃO: Programa básico que solicita cinco números ao usuário
 *            e calcula a soma total
 * CONCEITOS: Variáveis float, acumuladores, entrada/saída sequencial
 * AUTOR: Estudos PCA
 * DATA: 22/12/2022
 */

#include <stdio.h>

int main() {
    float numero, soma = 0;
    int i;
    
    printf("=== CALCULADORA DE SOMA DE CINCO NUMEROS ===\n\n");
    
    // Lê cinco números do usuário
    for (i = 1; i <= 5; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%f", &numero);
        
        // Acumula na soma
        soma = soma + numero;
        
        printf("  -> Numero adicionado: %.2f | Soma parcial: %.2f\n", numero, soma);
    }
    
    // Exibe o resultado final
    printf("\n=== RESULTADO FINAL ===\n");
    printf("Soma total dos cinco numeros: %.2f\n", soma);
    printf("Media aritmetica: %.2f\n", soma / 5);
    
    // Informações adicionais
    printf("\n=== INFORMACOES ADICIONAIS ===\n");
    printf("Quantidade de numeros somados: 5\n");
    printf("Valor medio por numero: %.2f\n", soma / 5);
    
    return 0;
}