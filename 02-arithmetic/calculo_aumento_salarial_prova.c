/*
 * PROGRAMA: Cálculo de Aumento Salarial
 * DESCRIÇÃO: Programa que calcula o novo salário após aumento de 10%
 * CONCEITOS: Variáveis float, operações matemáticas, porcentagem
 * EXERCÍCIO: Prova - Exercício 2
 * AUTOR: Estudos PCA
 */

#include <stdio.h>

int main() {
    float salarioInicial, novoSalario;
    
    printf("=== CALCULADORA DE AUMENTO SALARIAL ===\n\n");
    
    // Entrada de dados
    printf("Informe o salario inicial: R$ ");
    scanf("%f", &salarioInicial);
    
    // Validação básica
    if (salarioInicial <= 0) {
        printf("Erro: Salario deve ser um valor positivo!\n");
        return 1;
    }
    
    // Cálculo do novo salário com aumento de 10%
    // novoSalario = salarioInicial * 1.1 (equivalente a * 11/10)
    novoSalario = salarioInicial * 1.1;
    
    // Exibição dos resultados
    printf("\n=== RESULTADO ===\n");
    printf("Salario inicial: R$ %.2f\n", salarioInicial);
    printf("Aumento: 10%%\n");
    printf("Valor do aumento: R$ %.2f\n", novoSalario - salarioInicial);
    printf("Novo salario: R$ %.2f\n", novoSalario);
    
    return 0;
}
