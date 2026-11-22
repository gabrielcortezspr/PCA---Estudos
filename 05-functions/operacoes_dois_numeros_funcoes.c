/*
 * PROGRAMA: Operações com Dois Números - Demonstração de Funções
 * DESCRIÇÃO: Programa que demonstra uso de funções para validação, cálculos matemáticos
 *            e operações com dois números inteiros
 * CONCEITOS: Funções definidas pelo usuário, validação de entrada, cálculo de percentual,
 *            valor absoluto, função menor
 * AUTOR: Estudos PCA
 * DATA: 05/01/2023
 */

#include <stdio.h>

// Função para validar entrada no intervalo [0, 1000]
int scanIntIntervalo(int valor) {
    while (valor < 0 || valor > 1000) {
        printf("Selecione um valor valido entre 0 e 1000\n");
        printf("Tente novamente, defina o valor da variavel: ");
        scanf("%d", &valor);
    }
    return valor;
}

// Função que retorna o menor entre dois números
int menor(int num1, int num2) {
    if (num1 > num2) {
        return num2;
    }
    return num1;
}

// Função que calcula o percentual de um valor em relação ao total
float percentual(float valor, float total) {
    float resultado = (100 * valor) / total;
    return resultado;
}

// Função que calcula a diferença absoluta entre dois números
float absdif(float num1, float num2) {
    float resultado = num1 - num2;
    return resultado;
}

int main() {
    int x, y, menorValor;
    float percentualCalculado, diferenca;

    // Solicita e valida o primeiro número
    printf("Qual o valor de x: ");
    scanf("%d", &x);
    x = scanIntIntervalo(x);
    
    // Solicita e valida o segundo número
    printf("Qual o valor de y: ");
    scanf("%d", &y);
    y = scanIntIntervalo(y);
    
    // Calcula o menor valor
    menorValor = menor(x, y);
    
    // Calcula o percentual do menor em relação à soma
    percentualCalculado = percentual(menorValor, x + y);
    
    // Calcula a diferença absoluta
    diferenca = absdif(x, y);
    if (diferenca < 0) {
        diferenca *= -1;
    }
    
    // Exibe os resultados
    printf("O percentual do menor (%d) em relacao a soma eh: %.2f%%\n", menorValor, percentualCalculado);
    printf("O modulo da diferenca entre os numeros eh: %.2f\n", diferenca);
    
    return 0;
}
