/*
 * PROGRAMA: Conversão Fahrenheit para Celsius
 * DESCRIÇÃO: Programa que converte temperatura de Fahrenheit para Celsius
 *            usando a fórmula: C = (F - 32) * 5/9
 * CONCEITOS: Variáveis float, fórmula matemática, conversão de unidades
 * AUTOR: Estudos PCA
 * DATA: 15/12/2022
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    float fahrenheit, celsius;
    
    printf("=== CONVERSOR FAHRENHEIT PARA CELSIUS ===\n\n");
    
    // Entrada da temperatura em Fahrenheit
    printf("Informe a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    // Conversão usando a fórmula: C = (F - 32) * 5/9
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    
    // Exibição dos resultados
    printf("\n=== RESULTADO DA CONVERSAO ===\n");
    printf("Temperatura em Fahrenheit: %.2f°F\n", fahrenheit);
    printf("Temperatura em Celsius: %.2f°C\n", celsius);
    
    // Informações sobre pontos de referência
    printf("\n=== PONTOS DE REFERENCIA ===\n");
    printf("Ponto de congelamento da agua: 0°C = 32°F\n");
    printf("Ponto de ebulicao da agua: 100°C = 212°F\n");
    
    // Análise da temperatura
    if (celsius <= 0) {
        printf("Classificacao: Temperatura de congelamento ou abaixo\n");
    } else if (celsius < 15) {
        printf("Classificacao: Muito frio\n");
    } else if (celsius < 25) {
        printf("Classificacao: Agradavel\n");
    } else if (celsius < 35) {
        printf("Classificacao: Quente\n");
    } else {
        printf("Classificacao: Muito quente\n");
    }
    
    return 0;
}