/*
 * PROGRAMA: Simulador de Decaimento Radioativo
 * DESCRIÇÃO: Programa que simula o decaimento radioativo de uma substância,
 *            calculando o tempo necessário para a massa reduzir abaixo de 0.5g
 * CONCEITOS: Estruturas de repetição (do-while), matemática aplicada,
 *            simulação física, conversão de tempo, função trunc()
 * AUTOR: Estudos PCA
 * DATA: 22/12/2022
 */

#include <stdio.h>
#include <math.h>

int main() {
    float massaInicial, massaAtual;
    int voltas = 0, tempoTotal, horas, minutos, segundos;
    
    printf("=== SIMULADOR DE DECAIMENTO RADIOATIVO ===\n\n");
    printf("Este programa simula o decaimento de uma substancia que\n");
    printf("perde metade de sua massa a cada 50 segundos.\n\n");
    
    // Entrada da massa inicial
    printf("Digite a massa inicial da substancia (em gramas): ");
    scanf("%f", &massaInicial);
    
    // Validação da massa
    if (massaInicial <= 0) {
        printf("Erro: A massa deve ser positiva!\n");
        return 1;
    }
    
    if (massaInicial <= 0.5) {
        printf("A massa ja e menor ou igual a 0.5g. Nenhum decaimento necessario.\n");
        return 0;
    }
    
    massaAtual = massaInicial;
    
    printf("\n=== PROCESSO DE DECAIMENTO ===\n");
    printf("Massa inicial: %.2fg\n\n", massaInicial);
    
    // Simula o processo de decaimento
    do {
        printf("Ciclo %d: %.2fg -> ", voltas + 1, massaAtual);
        massaAtual = massaAtual / 2;
        voltas++;
        printf("%.2fg\n", massaAtual);
    } while (massaAtual > 0.5);
    
    // Calcula tempo total em segundos (50 segundos por ciclo)
    tempoTotal = 50 * voltas;
    
    // Converte para horas, minutos e segundos
    horas = tempoTotal / 3600;
    minutos = (tempoTotal - horas * 3600) / 60;
    segundos = tempoTotal - minutos * 60 - horas * 3600;
    
    // Exibição dos resultados
    printf("\n=== RESULTADO FINAL ===\n");
    printf("Massa inicial: %.2fg\n", massaInicial);
    printf("Massa final: %.2fg\n", massaAtual);
    printf("Numero de ciclos: %d\n", voltas);
    printf("Tempo total de decaimento: %d horas, %d minutos e %d segundos\n", 
           horas, minutos, segundos);
    printf("Tempo total em segundos: %d\n", tempoTotal);
    
    // Cálculos adicionais
    printf("\n=== INFORMACOES ADICIONAIS ===\n");
    printf("Percentual da massa restante: %.2f%%\n", 
           (massaAtual / massaInicial) * 100);
    printf("Massa perdida: %.2fg\n", massaInicial - massaAtual);
    printf("Taxa de decaimento: 50%% a cada 50 segundos\n");
    
    return 0;
}