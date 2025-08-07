/*
 * PROGRAMA: Cálculo de Peso Ideal
 * DESCRIÇÃO: Programa que calcula o peso ideal baseado na altura usando fórmula específica
 * CONCEITOS: Variáveis float, fórmulas matemáticas, entrada/saída
 * AUTOR: Estudos PCA
 * DATA: 15/12/2022
 */

#include <stdio.h>

int main() {
    float altura, pesoideal;
    
    printf("=== CALCULADORA DE PESO IDEAL ===\n\n");
    
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);
    
    // Validação básica
    if (altura <= 0 || altura > 3.0) {
        printf("Erro: Altura deve estar entre 0 e 3 metros!\n");
        return 1;
    }
    
    // Fórmula do peso ideal: (72.7 * altura) - 58
    pesoideal = (72.7 * altura) - 58;
    
    printf("\n=== RESULTADO ===\n");
    printf("Altura: %.2f metros\n", altura);
    printf("Peso ideal: %.1f kg\n", pesoideal);
    
    // Informação adicional
    if (pesoideal < 40) {
        printf("Nota: Resultado pode estar fora da faixa normal.\n");
    }
    
    return 0;
}