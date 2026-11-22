/*
 * PROGRAMA: Busca Maior e Menor de 5 Números
 * DESCRIÇÃO: Programa que lê 5 números e encontra o maior e menor valor
 * CONCEITOS: Estruturas de repetição (for), comparações, inicialização de variáveis
 * AUTOR: Estudos PCA
 * DATA: 22/12/2022
 */

#include <stdio.h>

int main() {
    int numero, maiorNumero, menorNumero, contador;
    int primeiroNumero = 1;
    
    printf("=== BUSCA DE MAIOR E MENOR ENTRE 5 NUMEROS ===\n\n");
    
    for (contador = 1; contador <= 5; contador++) {
        printf("Digite o %d numero: ", contador);
        scanf("%d", &numero);
        
        // Inicializa maior e menor com o primeiro número
        if (primeiroNumero) {
            maiorNumero = numero;
            menorNumero = numero;
            primeiroNumero = 0;
            printf("  -> Primeiro numero: %d (maior e menor iniciais)\n", numero);
        } else {
            if (numero > maiorNumero) {
                maiorNumero = numero;
                printf("  -> Novo maior numero: %d\n", numero);
            } else if (numero < menorNumero) {
                menorNumero = numero;
                printf("  -> Novo menor numero: %d\n", numero);
            } else {
                printf("  -> Numero %d esta entre o maior e menor\n", numero);
            }
        }
    }
    
    printf("\n=== RESULTADO FINAL ===\n");
    printf("Menor numero: %d\n", menorNumero);
    printf("Maior numero: %d\n", maiorNumero);
    printf("Diferenca entre maior e menor: %d\n", maiorNumero - menorNumero);
    
    return 0;
}