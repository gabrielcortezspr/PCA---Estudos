/*
 * PROGRAMA: Conversão Celsius para Fahrenheit
 * DESCRIÇÃO: Programa que converte temperatura de Celsius para Fahrenheit
 *            usando a fórmula: F = (C * 9/5) + 32
 * CONCEITOS: Variáveis float, fórmula matemática, conversão de unidades
 * AUTOR: Estudos PCA
 * DATA: 15/12/2022
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    float celsius, fahrenheit;
    
    printf("=== CONVERSOR CELSIUS PARA FAHRENHEIT ===\n\n");
    
    // Entrada da temperatura em Celsius
    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &celsius);
    
    // Conversão usando a fórmula: F = (C * 9/5) + 32
    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    
    // Exibição dos resultados
    printf("\n=== RESULTADO DA CONVERSAO ===\n");
    printf("Temperatura em Celsius: %.2f°C\n", celsius);
    printf("Temperatura em Fahrenheit: %.2f°F\n", fahrenheit);
    
    // Informações sobre pontos de referência
    printf("\n=== PONTOS DE REFERENCIA ===\n");
    printf("Ponto de congelamento da agua: 0°C = 32°F\n");
    printf("Ponto de ebulicao da agua: 100°C = 212°F\n");
    printf("Temperatura corporal normal: 37°C = 98.6°F\n");
    
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