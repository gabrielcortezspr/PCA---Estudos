/*
 * PROGRAMA: Calculadora de Gorjeta
 * DESCRIÇÃO: Programa que calcula o valor da gorjeta baseado no valor da conta
 *            e na porcentagem informada pelo usuário
 * CONCEITOS: Variáveis float, cálculo de porcentagem, entrada/saída
 * EXERCÍCIO: Prova - Exercício 3
 * AUTOR: Estudos PCA
 */

#include <stdio.h>

int main() {
    float contaTotal, gorjetaPorcentagem, gorjeta, totalPagar;
    
    printf("=== CALCULADORA DE GORJETA ===\n\n");
    
    // Entrada do valor da conta
    printf("Informe o valor da conta: R$ ");
    scanf("%f", &contaTotal);
    
    // Validação da conta
    if (contaTotal <= 0) {
        printf("Erro: Valor da conta deve ser positivo!\n");
        return 1;
    }
    
    // Entrada da porcentagem da gorjeta
    printf("Informe a porcentagem da gorjeta para o garcom: ");
    scanf("%f", &gorjetaPorcentagem);
    
    // Validação da porcentagem
    if (gorjetaPorcentagem < 0) {
        printf("Erro: Porcentagem nao pode ser negativa!\n");
        return 1;
    }
    
    // Cálculo da gorjeta
    gorjeta = contaTotal * gorjetaPorcentagem / 100;
    totalPagar = contaTotal + gorjeta;
    
    // Exibição dos resultados
    printf("\n=== RESUMO DA CONTA ===\n");
    printf("Valor da conta: R$ %.2f\n", contaTotal);
    printf("Porcentagem da gorjeta: %.1f%%\n", gorjetaPorcentagem);
    printf("Valor da gorjeta: R$ %.2f\n", gorjeta);
    printf("Total a pagar: R$ %.2f\n", totalPagar);
    
    return 0;
}
