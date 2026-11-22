/*
 * PROGRAMA: Calculadora de Média e Desvio Padrão
 * DESCRIÇÃO: Programa que calcula a média e desvio padrão de notas de alunos
 *            usando alocação dinâmica e ponteiros
 * CONCEITOS: Alocação dinâmica, ponteiros, estatística, funções com parâmetros por referência
 * AUTOR: Estudos PCA
 * DATA: 2023
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int i;  // Variável global para loops

// Função que calcula média e desvio padrão
void calcularMediaDesvio(float *notas, int quantidadeAlunos, float *media, float *desvio) {
    float soma = 0;
    float variancia = 0;
    
    // Coleta das notas e cálculo da soma
    printf("\n=== COLETA DAS NOTAS ===\n");
    for (i = 0; i < quantidadeAlunos; i++) {
        printf("Qual a nota do %d aluno? ", i + 1);
        scanf("%f", (notas + i));
        
        // Validação básica da nota
        while (*(notas + i) < 0 || *(notas + i) > 10) {
            printf("Erro: Nota deve estar entre 0 e 10!\n");
            printf("Qual a nota do %d aluno? ", i + 1);
            scanf("%f", (notas + i));
        }
        
        soma += *(notas + i);
    }
    
    // Cálculo da média
    *media = soma / quantidadeAlunos;
    
    // Cálculo da variância (e depois desvio padrão)
    for (i = 0; i < quantidadeAlunos; i++) {
        variancia += pow(*(notas + i) - *media, 2) / quantidadeAlunos;
    }
    
    *desvio = sqrt(variancia);
}

int main() {
    int quantidadeAlunos;
    float *notas;
    float media, desvio;
    
    printf("=== CALCULADORA DE MEDIA E DESVIO PADRAO ===\n\n");
    
    // Entrada da quantidade de alunos
    printf("Qual a quantidade de alunos? ");
    scanf("%d", &quantidadeAlunos);
    
    // Validação
    while (quantidadeAlunos <= 0) {
        printf("Erro: Quantidade deve ser positiva!\n");
        printf("Qual a quantidade de alunos? ");
        scanf("%d", &quantidadeAlunos);
    }
    
    // Alocação dinâmica do array de notas
    notas = (float*) malloc(quantidadeAlunos * sizeof(float));
    
    if (notas == NULL) {
        printf("Erro: Nao foi possivel alocar memoria!\n");
        return 1;
    }
    
    // Cálculo da média e desvio padrão
    calcularMediaDesvio(notas, quantidadeAlunos, &media, &desvio);
    
    // Exibição dos resultados
    printf("\n=== RESULTADOS ESTATISTICOS ===\n");
    printf("Quantidade de alunos: %d\n", quantidadeAlunos);
    printf("Media das notas: %.2f\n", media);
    printf("Desvio padrao: %.2f\n", desvio);
    
    // Análise dos resultados
    printf("\n=== ANALISE ===\n");
    if (desvio < 1.0) {
        printf("Baixa dispersao: As notas estao bem proximas da media.\n");
    } else if (desvio < 2.0) {
        printf("Dispersao moderada: Alguma variacao nas notas.\n");
    } else {
        printf("Alta dispersao: As notas variam bastante.\n");
    }
    
    // Liberação da memória
    free(notas);
    printf("\nMemoria liberada com sucesso!\n");
    
    return 0;
}
