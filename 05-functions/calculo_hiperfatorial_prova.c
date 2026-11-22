/*
 * PROGRAMA: Cálculo de Hiperfatorial
 * DESCRIÇÃO: Programa que calcula o hiperfatorial de um número
 *            Hiperfatorial de n = 1^1 * 2^2 * 3^3 * ... * n^n
 * CONCEITOS: Funções, estruturas de repetição (for), potenciação,
 *            validação de entrada, operações matemáticas avançadas
 * EXERCÍCIO: Prova - Questão 2
 * AUTOR: Estudos PCA
 */

#include <stdio.h>
#include <math.h>

// Função para obter um número inteiro positivo
int get_inteiro() {
    int numero;
    do {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numero);
        if (numero < 0) {
            printf("Erro: O numero deve ser positivo!\n");
        }
    } while (numero < 0);
    return numero;
}

// Função para calcular o hiperfatorial
long long hiperfatorial(int num) {
    long long hiperf = 1;
    int i;
    
    // Hiperfatorial: 1^1 * 2^2 * 3^3 * ... * n^n
    // Começamos de 1 porque 0^0 é indefinido
    for (i = 1; i <= num; i++) {
        hiperf *= (long long)pow(i, i);
    }
    return hiperf;
}

// Função para imprimir o resultado
void print_resultado(int numero, long long resultado) {
    printf("\n=== RESULTADO ===\n");
    printf("Numero: %d\n", numero);
    printf("Hiperfatorial de %d = %lld\n", numero, resultado);
    
    // Mostra o cálculo step by step para números pequenos
    if (numero <= 5) {
        printf("Calculo: ");
        for (int i = 1; i <= numero; i++) {
            printf("%d^%d", i, i);
            if (i < numero) printf(" * ");
        }
        printf(" = %lld\n", resultado);
    }
}

int main() {
    int numero;
    long long resultado;
    
    printf("=== CALCULADORA DE HIPERFATORIAL ===\n\n");
    printf("Hiperfatorial de n = 1^1 * 2^2 * 3^3 * ... * n^n\n\n");
    
    // Obtém o número do usuário
    numero = get_inteiro();
    
    // Calcula o hiperfatorial
    resultado = hiperfatorial(numero);
    
    // Exibe o resultado
    print_resultado(numero, resultado);
    
    // Aviso para números grandes
    if (numero > 10) {
        printf("\nNota: Para numeros grandes, o resultado pode exceder os limites do tipo de dados!\n");
    }
    
    return 0;
}
