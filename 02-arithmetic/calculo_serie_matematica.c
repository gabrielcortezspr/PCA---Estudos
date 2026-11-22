/*
 * PROGRAMA: Cálculo de Série Matemática
 * DESCRIÇÃO: Programa que calcula uma série matemática usando a fórmula:
 *            soma = 1/1 + 3/2 + 5/3 + 7/4 + ... + n/m
 * CONCEITOS: Estruturas de repetição (do-while), séries matemáticas,
 *            operações com frações, acumuladores
 * AUTOR: Estudos PCA
 * DATA: 22/12/2022
 */

#include <stdio.h>

int main() {
    float denominador = 1;
    float numerador = 1;
    float soma = 0;
    float termo_atual;
    int iteracao = 1;
    int max_termos = 50;
    
    printf("=== CALCULADORA DE SERIE MATEMATICA ===\n\n");
    printf("Calculando a serie: 1/1 + 3/2 + 5/3 + 7/4 + ...\n");
    printf("Processando %d termos...\n\n", max_termos);
    
    do {
        // Calcula o termo atual da série
        termo_atual = numerador / denominador;
        soma += termo_atual;
        
        printf("Termo %2d: %.0f/%.0f = %.4f | Soma parcial: %.4f\n", 
               iteracao, numerador, denominador, termo_atual, soma);
        
        // Prepara para o próximo termo
        denominador++;
        numerador += 2;  // Sequência: 1, 3, 5, 7, 9, ...
        iteracao++;
        
    } while (iteracao <= max_termos);
    
    // Exibição dos resultados finais
    printf("\n=== RESULTADO FINAL ===\n");
    printf("Numero de termos calculados: %d\n", max_termos);
    printf("Soma final da serie: %.6f\n", soma);
    printf("Valor medio por termo: %.6f\n", soma / max_termos);
    
    // Informações sobre a série
    printf("\n=== INFORMACOES DA SERIE ===\n");
    printf("Padrao dos numeradores: 1, 3, 5, 7, 9, ... (numeros impares)\n");
    printf("Padrao dos denominadores: 1, 2, 3, 4, 5, ... (numeros naturais)\n");
    printf("Formula geral do termo n: (2n-1)/n\n");
    
    return 0;
}