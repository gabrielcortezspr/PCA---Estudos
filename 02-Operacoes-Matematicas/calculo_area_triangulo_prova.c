/*
 * PROGRAMA: Cálculo da Área de um Triângulo
 * DESCRIÇÃO: Programa que calcula a área de um triângulo dadas base e altura
 * CONCEITOS: Variáveis float, entrada/saída, fórmula matemática
 * EXERCÍCIO: Prova - Exercício 1
 * AUTOR: Estudos PCA
 */

#include <stdio.h>

int main() {
    // Declaração de variáveis 
    float area, base, altura;

    printf("=== CALCULO DA AREA DE TRIANGULO ===\n\n");

    // Entrada de dados
    printf("Informe a base do triangulo (em cm): ");
    scanf("%f", &base);
    
    printf("Informe a altura do triangulo (em cm): ");
    scanf("%f", &altura);

    // Validação básica
    if (base <= 0 || altura <= 0) {
        printf("Erro: Base e altura devem ser valores positivos!\n");
        return 1;
    }

    // Processamento dos dados - Fórmula: Area = (base * altura) / 2
    area = (base * altura) / 2;

    // Exibição do resultado
    printf("\n=== RESULTADO ===\n");
    printf("Base: %.2f cm\n", base);
    printf("Altura: %.2f cm\n", altura);
    printf("Area do triangulo: %.2f cm²\n", area);
    
    return 0;
}
