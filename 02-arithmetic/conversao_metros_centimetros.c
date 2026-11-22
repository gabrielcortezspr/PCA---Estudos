/*
 * PROGRAMA: Conversão de Metros para Centímetros
 * DESCRIÇÃO: Programa que converte uma medida em metros para centímetros
 * CONCEITOS: Variáveis float, conversão de unidades, operações matemáticas
 * AUTOR: Estudos PCA
 * DATA: 15/12/2022
 */

#include <stdio.h>

int main() {
    float metros, centimetros;

    // Solicita a medida em metros
    printf("Digite a medida em metros para conversao: ");
    scanf("%f", &metros);

    // Converte metros para centímetros (1 metro = 100 centímetros)
    centimetros = metros * 100;

    // Exibe o resultado
    printf("A medida em centimetros eh: %.2f cm\n", centimetros);

    return 0;
}