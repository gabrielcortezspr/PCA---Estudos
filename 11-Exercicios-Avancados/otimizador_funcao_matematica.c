/*
 * PROGRAMA: Otimizador de Função Matemática
 * DESCRIÇÃO: Programa que encontra os valores de x e y que maximizam
 *            a função f(x,y) = x*y - x² + y nos intervalos [0,m] e [0,n]
 * CONCEITOS: Loops aninhados, otimização matemática, validação de entrada,
 *            busca de máximos, funções de duas variáveis
 * AUTOR: Estudos PCA
 * DATA: 22/12/2022
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, x, y, melhorX, melhorY;
    int resultado, maiorResultado = -999999; // Inicializa com valor muito baixo
    
    printf("=== OTIMIZADOR DE FUNCAO MATEMATICA ===\n\n");
    printf("Este programa encontra os valores de x e y que maximizam\n");
    printf("a funcao f(x,y) = x*y - x² + y\n\n");
    
    // Entrada dos limites dos intervalos
    printf("Digite o valor maximo de M (limite para x): ");
    scanf("%d", &m);
    printf("Digite o valor maximo de N (limite para y): ");
    scanf("%d", &n);
    
    // Validação das entradas
    while (m < 0 || n < 0) {
        printf("\nErro: Os valores devem ser maiores ou iguais a zero!\n");
        if (m < 0) {
            printf("Digite um novo valor para M: ");
            scanf("%d", &m);
        }
        if (n < 0) {
            printf("Digite um novo valor para N: ");
            scanf("%d", &n);
        }
    }
    
    printf("\n=== CALCULANDO FUNCAO PARA TODOS OS PONTOS ===\n");
    printf("Funcao: f(x,y) = x*y - x² + y\n");
    printf("Intervalos: x ∈ [0,%d], y ∈ [0,%d]\n\n", m, n);
    
    // Testa todos os valores possíveis de x e y
    for (x = 0; x <= m; x++) {
        for (y = 0; y <= n; y++) {
            resultado = x * y - x * x + y;
            
            printf("f(%d,%d) = %d*%d - %d² + %d = %d\n", 
                   x, y, x, y, x, y, resultado);
            
            // Verifica se é o maior resultado encontrado
            if (resultado >= maiorResultado) {
                maiorResultado = resultado;
                melhorX = x;
                melhorY = y;
            }
        }
    }
    
    // Exibição dos resultados
    printf("\n=== RESULTADO DA OTIMIZACAO ===\n");
    printf("Valores otimos encontrados:\n");
    printf("x = %d\n", melhorX);
    printf("y = %d\n", melhorY);
    printf("Valor maximo da funcao: f(%d,%d) = %d\n", 
           melhorX, melhorY, maiorResultado);
    
    // Análise adicional
    printf("\n=== ANALISE ADICIONAL ===\n");
    printf("Total de pontos testados: %d\n", (m+1) * (n+1));
    printf("Ponto otimo: (%d, %d)\n", melhorX, melhorY);
    
    // Verifica se o máximo está na borda
    if (melhorX == 0 || melhorX == m || melhorY == 0 || melhorY == n) {
        printf("Observacao: O maximo foi encontrado na borda do dominio.\n");
    } else {
        printf("Observacao: O maximo foi encontrado no interior do dominio.\n");
    }
    
    return 0;
}