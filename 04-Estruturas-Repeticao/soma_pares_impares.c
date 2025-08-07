/*
 * PROGRAMA: Soma de Números Pares e Ímpares
 * DESCRIÇÃO: Programa que lê vários inteiros positivos e calcula a soma
 *            separada dos números pares e ímpares. Para quando entrar
 *            um número maior que 1000
 * CONCEITOS: Estruturas de repetição (do-while), operador módulo,
 *            acumuladores, estruturas condicionais
 * AUTOR: Estudos PCA
 * DATA: 22/12/2022
 */

#include <stdio.h>

int main() {
    int numero, contador = 0;
    float somaPares = 0, somaImpares = 0;
    
    printf("=== SOMA DE NUMEROS PARES E IMPARES ===\n\n");
    printf("Digite numeros inteiros positivos.\n");
    printf("O programa para quando digitar um numero maior que 1000.\n\n");
    
    do {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        
        // Só processa se o número for menor ou igual a 1000
        if (numero <= 1000) {
            contador++;
            
            // Verifica se é par ou ímpar usando operador módulo
            if (numero % 2 == 0) {
                somaPares += numero;
                printf("  -> %d e par (adicionado a soma dos pares)\n", numero);
            } else {
                somaImpares += numero;
                printf("  -> %d e impar (adicionado a soma dos impares)\n", numero);
            }
        } else {
            printf("  -> %d e maior que 1000. Encerrando programa...\n", numero);
        }
        
    } while (numero <= 1000);
    
    // Exibição dos resultados
    printf("\n=== RESULTADOS FINAIS ===\n");
    printf("Total de numeros processados: %d\n", contador);
    printf("Soma dos numeros pares: %.0f\n", somaPares);
    printf("Soma dos numeros impares: %.0f\n", somaImpares);
    printf("Soma total: %.0f\n", somaPares + somaImpares);
    
    // Estatísticas adicionais
    if (contador > 0) {
        printf("\n=== ESTATISTICAS ===\n");
        printf("Media dos numeros pares: %.2f\n", 
               somaPares > 0 ? somaPares / contador : 0);
        printf("Media dos numeros impares: %.2f\n", 
               somaImpares > 0 ? somaImpares / contador : 0);
    }
    
    return 0;
}