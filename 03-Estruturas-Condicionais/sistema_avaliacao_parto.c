/*
 * PROGRAMA: Sistema de Avaliação de Parto
 * DESCRIÇÃO: Sistema que avalia o tipo de parto recomendado baseado no peso do feto
 *            e tempo de gestação, usando estruturas condicionais complexas
 * CONCEITOS: Estruturas condicionais (if/else if/else), validação de entrada,
 *            funções, lógica médica simplificada
 * AUTOR: Estudos PCA
 * DATA: 05/01/2023
 */

#include <stdio.h>

// Função para validar entrada de dados da gestação
int gestacao() {
    int num;
    scanf("%d", &num);
    
    // Valida se o número é não negativo
    while (num < 0) {
        printf("Erro: Selecione um valor valido (nao negativo) e tente novamente: ");
        scanf("%d", &num);
    }
    return num;
}

// Função que avalia o tipo de parto recomendado
void reav(int peso, int tempo) {
    printf("\n=== AVALIACAO DO PARTO ===\n");
    printf("Peso do feto: %d gramas\n", peso);
    printf("Tempo de gestacao: %d semanas\n", tempo);
    printf("Recomendacao: ");
    
    // Condições para reavaliar clinicamente
    if (peso < 100 || tempo < 28) {
        printf("Parto nao devera ser realizado - REAVALIAR CLINICAMENTE\n");
        printf("Motivo: Peso muito baixo ou tempo insuficiente de gestacao\n");
    }
    // Condições para parto normal
    else if ((peso > 2500 && tempo > 28) || (peso >= 1500 && peso <= 2000 && tempo > 36)) {
        printf("PARTO NORMAL recomendado\n");
        if (peso > 2500) {
            printf("Motivo: Peso adequado e tempo suficiente\n");
        } else {
            printf("Motivo: Peso no limite aceitavel com tempo prolongado\n");
        }
    }
    // Caso contrário, cesariana
    else {
        printf("PARTO CESARIANA recomendado\n");
        printf("Motivo: Condicoes que requerem intervencao cirurgica\n");
    }
}

int main() {
    int semanas, gramas;
    
    printf("=== SISTEMA DE AVALIACAO DE PARTO ===\n\n");
    
    // Coleta dados do peso
    printf("Qual o peso do feto (em gramas)? ");
    gramas = gestacao();
    
    // Coleta dados do tempo de gestação
    printf("Quantas semanas de gestacao ja se passaram? ");
    semanas = gestacao();
    
    // Avalia o tipo de parto
    reav(gramas, semanas);
    
    printf("\nNota: Esta eh uma avaliacao simplificada para fins educacionais.\n");
    printf("Sempre consulte um medico especialista!\n");
    
    return 0;
}
