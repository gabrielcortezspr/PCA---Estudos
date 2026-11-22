/*
 * PROGRAMA: Calculadora de Salário com Descontos
 * DESCRIÇÃO: Programa que calcula salário bruto e líquido considerando
 *            descontos de INSS, Imposto de Renda e Sindicato
 * CONCEITOS: Variáveis float, cálculos percentuais, múltiplos descontos
 * AUTOR: Estudos PCA
 * DATA: 15/12/2022
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    float horasTrabalho, salarioBruto, valorHora;
    float inss, sindicato, impostoRenda, totalDescontos, salarioLiquido;
    
    printf("=== CALCULADORA DE SALARIO COM DESCONTOS ===\n\n");
    
    // Entrada dos dados
    printf("Quanto voce ganha por hora? R$ ");
    scanf("%f", &valorHora);
    
    if (valorHora <= 0) {
        printf("Erro: Valor por hora deve ser positivo!\n");
        return 1;
    }
    
    printf("Quantas horas voce trabalha por mes? ");
    scanf("%f", &horasTrabalho);
    
    if (horasTrabalho <= 0 || horasTrabalho > 744) {
        printf("Erro: Horas devem estar entre 1 e 744!\n");
        return 1;
    }
    
    // Cálculo do salário bruto
    salarioBruto = valorHora * horasTrabalho;
    
    // Cálculo dos descontos
    inss = salarioBruto * 8.0 / 100.0;        // 8% INSS
    sindicato = salarioBruto * 5.0 / 100.0;   // 5% Sindicato
    impostoRenda = salarioBruto * 11.0 / 100.0; // 11% Imposto de Renda
    
    totalDescontos = inss + sindicato + impostoRenda;
    salarioLiquido = salarioBruto - totalDescontos;
    
    // Exibição dos resultados
    printf("\n=== FOLHA DE PAGAMENTO ===\n");
    printf("Valor por hora: R$ %.2f\n", valorHora);
    printf("Horas trabalhadas: %.1f\n", horasTrabalho);
    printf("Salario bruto: R$ %.2f\n", salarioBruto);
    
    printf("\n=== DESCONTOS ===\n");
    printf("INSS (8%%): R$ %.2f\n", inss);
    printf("Imposto de Renda (11%%): R$ %.2f\n", impostoRenda);
    printf("Sindicato (5%%): R$ %.2f\n", sindicato);
    printf("Total de descontos: R$ %.2f\n", totalDescontos);
    
    printf("\n=== RESULTADO FINAL ===\n");
    printf("Salario liquido: R$ %.2f\n", salarioLiquido);
    printf("Percentual de desconto total: %.1f%%\n", (totalDescontos / salarioBruto) * 100);
    
    return 0;
}