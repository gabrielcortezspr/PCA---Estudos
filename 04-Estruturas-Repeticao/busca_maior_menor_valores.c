/*
 * PROGRAMA: Busca de Maior e Menor Valores
 * DESCRIÇÃO: Programa que lê números reais, encontra o maior e menor valor
 *            entre eles e mostra o resultado
 * CONCEITOS: Estruturas de repetição (for), variáveis de controle,
 *            algoritmos de busca, comparações condicionais
 * AUTOR: Estudos PCA
 * DATA: 22/12/2022
 */

#include <stdio.h>

int main() {
    float numero, maiorNumero, menorNumero;
    int i, quantidadeNumeros;
    
    printf("=== BUSCA DE MAIOR E MENOR VALORES ===\n\n");
    
    // Define quantos números serão lidos
    printf("Quantos numeros deseja analisar? ");
    scanf("%d", &quantidadeNumeros);
    
    if (quantidadeNumeros <= 0) {
        printf("Erro: Quantidade deve ser positiva!\n");
        return 1;
    }
    
    printf("\nDigite %d numeros:\n", quantidadeNumeros);
    
    // Loop para ler os números
    for (i = 0; i < quantidadeNumeros; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%f", &numero);
        
        // No primeiro número, inicializa maior e menor
        if (i == 0) {
            maiorNumero = numero;
            menorNumero = numero;
        }
        // Nos demais, compara e atualiza se necessário
        else {
            if (numero > maiorNumero) {
                maiorNumero = numero;
            }
            if (numero < menorNumero) {
                menorNumero = numero;
            }
        }
    }
    
    // Exibição dos resultados
    printf("\n=== RESULTADOS DA ANALISE ===\n");
    printf("Quantidade de numeros analisados: %d\n", quantidadeNumeros);
    printf("Maior numero encontrado: %.2f\n", maiorNumero);
    printf("Menor numero encontrado: %.2f\n", menorNumero);
    printf("Diferenca entre maior e menor: %.2f\n", maiorNumero - menorNumero);
    
    // Informações adicionais
    if (maiorNumero == menorNumero) {
        printf("Observacao: Todos os numeros sao iguais!\n");
    }
    
    return 0;
}