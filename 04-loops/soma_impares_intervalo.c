/*
 * PROGRAMA: Soma de Números Ímpares em Intervalo
 * DESCRIÇÃO: Programa que lê 50 números e soma apenas os ímpares
 *            que estejam entre 100 e 200
 * CONCEITOS: Estruturas de repetição, operador módulo, condições compostas
 * AUTOR: Estudos PCA
 * DATA: 22/12/2022
 */

#include <stdio.h>

int main() {
    int numero, somaImpares = 0, contador;
    int quantidadeValidos = 0;
    
    printf("=== SOMA DE IMPARES NO INTERVALO [100, 200] ===\n\n");
    printf("Digite 50 numeros. Apenas impares entre 100 e 200 serao somados.\n\n");
    
    for (contador = 1; contador <= 50; contador++) {
        printf("Digite o %d numero: ", contador);
        scanf("%d", &numero);
        
        if (numero % 2 != 0 && numero > 99 && numero < 201) {
            somaImpares += numero;
            quantidadeValidos++;
            printf("  -> %d e impar e esta no intervalo (somado)\n", numero);
        } else {
            printf("  -> %d nao atende aos criterios\n", numero);
            if (numero % 2 == 0) printf("      (e par)\n");
            if (numero <= 99 || numero >= 201) printf("      (fora do intervalo [100,200])\n");
        }
    }
    
    printf("\n=== RESULTADO FINAL ===\n");
    printf("Total de numeros digitados: 50\n");
    printf("Numeros validos (impares entre 100-200): %d\n", quantidadeValidos);
    printf("Soma dos numeros validos: %d\n", somaImpares);
    
    if (quantidadeValidos > 0) {
        printf("Media dos numeros validos: %.2f\n", (float)somaImpares / quantidadeValidos);
    } else {
        printf("Nenhum numero atendeu aos criterios!\n");
    }
    
    return 0;
}