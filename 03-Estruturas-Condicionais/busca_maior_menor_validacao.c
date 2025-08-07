/*
 * PROGRAMA: Busca Maior e Menor com Validação
 * DESCRIÇÃO: Programa que lê 3 números positivos e encontra o maior e menor,
 *            interrompendo se encontrar um número negativo
 * CONCEITOS: Estruturas de repetição, validação de entrada, comando break
 * AUTOR: Estudos PCA
 * DATA: 22/12/2022
 */

#include <stdio.h>

int main() {
    int numero, maiorNumero, menorNumero, contador;
    int primeiroNumero = 1;
    int numerosLidos = 0;
    
    printf("=== BUSCA DE MAIOR E MENOR (APENAS POSITIVOS) ===\n\n");
    printf("Digite ate 3 numeros positivos. O programa para se encontrar negativo.\n\n");
    
    for (contador = 1; contador <= 3; contador++) {
        printf("Digite o %d numero: ", contador);
        scanf("%d", &numero);
        
        // Verifica se o número é negativo
        if (numero < 0) {
            printf("Erro: Nao aceitamos numeros negativos!\n");
            printf("Programa encerrado antes de completar 3 numeros.\n");
            break;
        }
        
        numerosLidos++;
        
        // Inicializa maior e menor com o primeiro número
        if (primeiroNumero) {
            maiorNumero = numero;
            menorNumero = numero;
            primeiroNumero = 0;
            printf("  -> Primeiro numero valido: %d\n", numero);
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
    
    if (numerosLidos > 0) {
        printf("\n=== RESULTADO FINAL ===\n");
        printf("Numeros lidos: %d\n", numerosLidos);
        printf("Menor numero: %d\n", menorNumero);
        printf("Maior numero: %d\n", maiorNumero);
        if (numerosLidos > 1) {
            printf("Diferenca: %d\n", maiorNumero - menorNumero);
        }
    } else {
        printf("\nNenhum numero valido foi lido!\n");
    }
    
    return 0;
}