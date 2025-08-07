/*
 * PROGRAMA: Calculadora de Salário Mensal
 * DESCRIÇÃO: Programa que calcula o salário mensal baseado no valor por hora
 *            e quantidade de horas trabalhadas por mês
 * CONCEITOS: Variáveis float, multiplicação, entrada/saída básica
 * AUTOR: Estudos PCA
 * DATA: 15/12/2022
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    float valorPorHora, horasPorMes, salarioMensal;
    
    printf("=== CALCULADORA DE SALARIO MENSAL ===\n\n");
    
    // Entrada do valor por hora
    printf("Quanto voce ganha por hora: R$ ");
    scanf("%f", &valorPorHora);
    
    // Validação do valor por hora
    if (valorPorHora <= 0) {
        printf("Erro: Valor por hora deve ser positivo!\n");
        return 1;
    }
    
    // Entrada das horas por mês
    printf("Quantas horas voce trabalha por mes: ");
    scanf("%f", &horasPorMes);
    
    // Validação das horas
    if (horasPorMes <= 0 || horasPorMes > 744) { // 744 = 31 dias * 24 horas
        printf("Erro: Horas por mes deve estar entre 1 e 744!\n");
        return 1;
    }
    
    // Cálculo do salário mensal
    salarioMensal = valorPorHora * horasPorMes;
    
    // Exibição dos resultados
    printf("\n=== RESULTADO ===\n");
    printf("Valor por hora: R$ %.2f\n", valorPorHora);
    printf("Horas trabalhadas por mes: %.1f\n", horasPorMes);
    printf("Salario mensal: R$ %.2f\n", salarioMensal);
    
    // Informações adicionais
    printf("\nInformacoes adicionais:\n");
    printf("Salario diario medio: R$ %.2f\n", salarioMensal / 30);
    printf("Salario semanal medio: R$ %.2f\n", salarioMensal / 4);
    
    return 0;
}