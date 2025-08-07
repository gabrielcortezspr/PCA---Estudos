/*
 * PROGRAMA: Dobro da Área de um Quadrado
 * DESCRIÇÃO: Programa que calcula o dobro da área de um quadrado dado o lado
 * CONCEITOS: Variáveis float, potenciação, operações matemáticas
 * AUTOR: Estudos PCA
 * DATA: 15/12/2022
 */

#include <stdio.h>

int main() {
    float lado, area, dobroArea;
    
    printf("=== CALCULO DO DOBRO DA AREA DE QUADRADO ===\n\n");
    
    printf("Digite a medida do lado do quadrado (em cm): ");
    scanf("%f", &lado);
    
    // Validação básica
    if (lado <= 0) {
        printf("Erro: O lado deve ser um valor positivo!\n");
        return 1;
    }
    
    // Cálculo da área: lado²
    area = lado * lado;
    
    // Dobro da área
    dobroArea = 2 * area;
    
    printf("\n=== RESULTADO ===\n");
    printf("Lado do quadrado: %.2f cm\n", lado);
    printf("Area do quadrado: %.2f cm²\n", area);
    printf("Dobro da area: %.2f cm²\n", dobroArea);
    
    return 0;
}