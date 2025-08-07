/*
 * PROGRAMA: Soma de Números Ímpares
 * DESCRIÇÃO: Programa que lê 50 números e calcula a soma apenas dos números ímpares
 * CONCEITOS: Estruturas de repetição (for), operador módulo, acumuladores
 * AUTOR: Estudos PCA
 * DATA: 22/12/2022
 */

#include <stdio.h>

int main() {
    int numero, somaImpares = 0, contador;
    int quantidadeImpares = 0;
    
    printf("=== SOMA DE NUMEROS IMPARES ===\n\n");
    printf("Digite 50 numeros. Apenas os impares serao somados.\n\n");
    
    for (contador = 1; contador <= 50; contador++) {
        printf("Digite o %d numero: ", contador);
        scanf("%d", &numero);
        
        if (numero % 2 != 0) {
            somaImpares += numero;
            quantidadeImpares++;
            printf("  -> %d e impar (adicionado a soma)\n", numero);
        } else {
            printf("  -> %d e par (nao somado)\n", numero);
        }
    }
    
    printf("\n=== RESULTADO FINAL ===\n");
    printf("Total de numeros digitados: 50\n");
    printf("Quantidade de numeros impares: %d\n", quantidadeImpares);
    printf("Soma de todos os numeros impares: %d\n", somaImpares);
    
    if (quantidadeImpares > 0) {
        printf("Media dos numeros impares: %.2f\n", (float)somaImpares / quantidadeImpares);
    }
    
    return 0;
}