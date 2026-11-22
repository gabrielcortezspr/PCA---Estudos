/*
 * PROGRAMA: Estatísticas de Números - Menor, Maior e Média
 * DESCRIÇÃO: Programa que lê números até encontrar um negativo e calcula
 *            menor valor, maior valor e média dos números lidos
 * CONCEITOS: Estruturas de repetição (while), acumuladores, estatísticas básicas
 * EXERCÍCIO: Prova - Questão 1
 * AUTOR: Estudos PCA
 */

#include <stdio.h>

void media() {
    float menor, maior, media, cont, soma, numero;
    
    // Inicialização das variáveis
    maior = 0;
    media = 0;
    soma = 0;
    cont = 0;
    
    printf("=== CALCULADORA DE ESTATISTICAS ===\n");
    printf("Digite numeros positivos (numero negativo para encerrar)\n\n");
    
    printf("Digite um numero: ");
    scanf("%f", &numero);
    menor = numero;  // Inicializa menor com o primeiro número
    
    // Loop que continua enquanto o número for não negativo
    while (numero >= 0) {
        // Atualiza maior valor
        if (numero > maior)
            maior = numero;
            
        // Atualiza menor valor
        if (numero < menor)
            menor = numero;
            
        // Acumula soma e contagem
        soma += numero;
        cont += 1;
        
        printf("Digite um numero: ");
        scanf("%f", &numero);
    }
    
    // Exibe os resultados
    printf("\n=== ESTATISTICAS DOS NUMEROS ===\n");
    printf("Quantidade de numeros: %.0f\n", cont);
    printf("Menor valor: %.2f\n", menor < 0 ? 0 : menor);
    printf("Maior valor: %.2f\n", maior);
    printf("Soma total: %.2f\n", soma);
    printf("Media aritmetica: %.2f\n", cont > 0 ? (soma/cont) : 0);
}

int main() {
    media();
    return 0;
}
