/*
 * PROGRAMA: Gerador de Números Ímpares Consecutivos
 * DESCRIÇÃO: Programa que encontra três números ímpares consecutivos
 *            cuja soma é igual ao cubo de um número n
 * CONCEITOS: Loops while, propriedades matemáticas, números ímpares,
 *            potenciação, algoritmos de busca
 * AUTOR: Estudos PCA
 * DATA: 22/12/2022
 */

#include <stdio.h>
#include <math.h>

int main() {
    int encontrado = 1;
    int numeroBase = -1;
    int n = -1;
    int impar1, impar2, impar3, somaImpares, cuboDen, i;
    
    printf("=== GERADOR DE NUMEROS IMPARES CONSECUTIVOS ===\n\n");
    printf("Este programa encontra tres numeros impares consecutivos\n");
    printf("cuja soma e igual ao cubo de um numero n.\n\n");
    
    // Entrada e validação do número n
    while (n < 0) {
        printf("Digite um valor para n (maior que zero): ");
        scanf("%d", &n);
        if (n < 0) {
            printf("Erro: O valor deve ser maior que zero!\n");
        }
    }
    
    // Calcula o cubo de n
    cuboDen = n * n * n;
    
    printf("\n=== PROCESSAMENTO ===\n");
    printf("Procurando tres numeros impares consecutivos cuja soma = %d³ = %d\n\n", 
           n, cuboDen);
    
    // Busca os três números ímpares consecutivos
    while (encontrado == 1) {
        numeroBase += 2;  // Próximo número ímpar
        
        // Os três números ímpares consecutivos
        impar1 = numeroBase;
        impar2 = numeroBase + 2;
        impar3 = numeroBase + 4;
        
        // Calcula a soma
        somaImpares = impar1 + impar2 + impar3;
        
        printf("Testando: %d + %d + %d = %d", impar1, impar2, impar3, somaImpares);
        
        // Verifica se encontrou a solução
        if (somaImpares == cuboDen) {
            encontrado = 0;
            printf(" ✓ ENCONTRADO!\n");
        } else {
            printf(" (continua...)\n");
        }
    }
    
    // Exibição dos resultados
    printf("\n=== RESULTADO ENCONTRADO ===\n");
    printf("Numero n: %d\n", n);
    printf("Cubo de n: %d³ = %d\n", n, cuboDen);
    printf("Tres numeros impares consecutivos: %d, %d, %d\n", 
           impar1, impar2, impar3);
    printf("Soma dos impares: %d + %d + %d = %d\n", 
           impar1, impar2, impar3, somaImpares);
    
    // Verificação matemática
    printf("\n=== VERIFICACAO MATEMATICA ===\n");
    printf("Propriedade verificada: %d³ = %d + %d + %d\n", 
           n, impar1, impar2, impar3);
    
    // Informação educativa
    printf("\n=== PROPRIEDADE MATEMATICA ===\n");
    printf("Todo cubo perfeito pode ser expresso como a soma\n");
    printf("de tres numeros impares consecutivos!\n");
    printf("Exemplos:\n");
    printf("1³ = 1 = 1\n");
    printf("2³ = 8 = 1 + 3 + 5\n");
    printf("3³ = 27 = 7 + 9 + 11\n");
    printf("4³ = 64 = 19 + 21 + 23\n");
    
    return 0;
}