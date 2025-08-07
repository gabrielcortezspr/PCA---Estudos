/*
 * PROGRAMA: Verificador de Número Perfeito (Apenas Pares)
 * DESCRIÇÃO: Programa que verifica se um número par é perfeito
 *            (igual à soma de seus divisores próprios)
 * CONCEITOS: Funções, validação de entrada, loops, números perfeitos
 * AUTOR: Estudos PCA
 * DATA: 05/01/2023
 */

#include <stdio.h>

// Função que lê e valida um número par
int lerNumeroPar() {
    int numero;
    
    printf("Digite um numero par para verificar se e perfeito: ");
    scanf("%d", &numero);
    
    while (numero % 2 != 0 || numero <= 0) {
        if (numero <= 0) {
            printf("Erro: Digite um numero positivo.\n");
        } else {
            printf("Erro: Digite um numero par.\n");
        }
        printf("Digite um valor valido (par e positivo): ");
        scanf("%d", &numero);
    }
    
    return numero;
}

// Função que verifica se um número é perfeito
void verificarPerfeito(int numero) {
    int i, somaDivisores = 0;
    
    printf("\nEncontrando divisores proprios de %d:\n", numero);
    
    // Encontra todos os divisores próprios (exceto o próprio número)
    for (i = 1; i < numero; i++) {
        if (numero % i == 0) {
            printf("Divisor: %d\n", i);
            somaDivisores += i;
        }
    }
    
    printf("\n=== RESULTADO ===\n");
    printf("Numero analisado: %d\n", numero);
    printf("Soma dos divisores proprios: %d\n", somaDivisores);
    
    if (numero != 0 && numero == somaDivisores) {
        printf("Conclusao: %d E UM NUMERO PERFEITO!\n", numero);
        printf("Explicacao: %d = ", numero);
        
        // Mostra a soma dos divisores
        int primeiro = 1;
        for (i = 1; i < numero; i++) {
            if (numero % i == 0) {
                if (!primeiro) printf(" + ");
                printf("%d", i);
                primeiro = 0;
            }
        }
        printf("\n");
    } else {
        printf("Conclusao: %d NAO E PERFEITO.\n", numero);
    }
    
    printf("\n=== NUMEROS PERFEITOS CONHECIDOS ===\n");
    printf("6, 28, 496, 8128, 33550336...\n");
}

int main() {
    int numero;
    
    printf("=== VERIFICADOR DE NUMERO PERFEITO (PARES) ===\n\n");
    
    numero = lerNumeroPar();
    verificarPerfeito(numero);
    
    return 0;
}
