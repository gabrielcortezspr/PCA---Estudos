/*
 * PROGRAMA: Verificador de Número Perfeito
 * DESCRIÇÃO: Programa que verifica se um número é perfeito. Um número
 *            perfeito é igual à soma de seus divisores próprios
 * CONCEITOS: Estruturas de repetição (do-while), operador módulo,
 *            acumuladores, algoritmos matemáticos, números perfeitos
 * AUTOR: Estudos PCA
 * DATA: 22/12/2022
 */

#include <stdio.h>

int main() {
    int numero, divisor = 1, somaDivisores = 0;
    
    printf("=== VERIFICADOR DE NUMERO PERFEITO ===\n\n");
    
    // Entrada do número
    printf("Digite um numero para verificar se e perfeito: ");
    scanf("%d", &numero);
    
    // Validação básica
    if (numero <= 1) {
        printf("Erro: Numeros menores ou iguais a 1 nao podem ser perfeitos!\n");
        return 1;
    }
    
    printf("\nEncontrando divisores proprios de %d:\n", numero);
    
    // Encontra todos os divisores próprios (exceto o próprio número)
    do {
        if (numero % divisor == 0) {
            printf("Divisor: %d\n", divisor);
            somaDivisores += divisor;
        }
        divisor++;
    } while (divisor < numero);
    
    // Exibe resultado da análise
    printf("\n=== RESULTADO DA ANALISE ===\n");
    printf("Numero analisado: %d\n", numero);
    printf("Soma dos divisores proprios: %d\n", somaDivisores);
    
    // Verifica se é número perfeito
    if (somaDivisores == numero) {
        printf("Conclusao: %d E UM NUMERO PERFEITO!\n", numero);
        printf("Explicacao: A soma dos divisores (%d) e igual ao numero\n", somaDivisores);
    } else {
        printf("Conclusao: %d NAO E UM NUMERO PERFEITO!\n", numero);
        printf("Explicacao: A soma dos divisores (%d) e diferente do numero (%d)\n", 
               somaDivisores, numero);
    }
    
    // Informações educativas e exemplos
    printf("\n=== INFORMACAO EDUCATIVA ===\n");
    printf("Um numero perfeito e igual a soma de seus divisores proprios.\n");
    printf("Exemplos de numeros perfeitos:\n");
    printf("- 6 = 1 + 2 + 3\n");
    printf("- 28 = 1 + 2 + 4 + 7 + 14\n");
    printf("- 496 = 1 + 2 + 4 + 8 + 16 + 31 + 62 + 124 + 248\n");
    
    return 0;
}