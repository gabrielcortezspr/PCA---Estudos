/*
 * PROGRAMA: Gerador de Triângulos Pitagóricos
 * DESCRIÇÃO: Programa que encontra todos os triângulos pitagóricos onde
 *            a hipotenusa é menor ou igual a um valor máximo definido
 * CONCEITOS: Loops aninhados (for triplo), teorema de Pitágoras,
 *            validação de entrada, algoritmos matemáticos
 * AUTOR: Estudos PCA
 * DATA: 22/12/2022
 */

#include <stdio.h>

int main() {
    int cateto1, cateto2, hipotenusa, hipotensaMaxima;
    int contador = 0;
    
    printf("=== GERADOR DE TRIANGULOS PITAGORICOS ===\n\n");
    printf("Este programa encontra todos os triangulos pitagoricos onde\n");
    printf("cateto1² + cateto2² = hipotenusa²\n\n");
    
    // Entrada da hipotenusa máxima
    printf("Digite a hipotenusa maxima: ");
    scanf("%d", &hipotensaMaxima);
    
    // Validação da entrada
    while (hipotensaMaxima <= 0) {
        printf("Erro: Digite um valor maior que zero\n");
        printf("Hipotenusa maxima: ");
        scanf("%d", &hipotensaMaxima);
    }
    
    printf("\n=== TRIANGULOS PITAGORICOS ENCONTRADOS ===\n");
    printf("Formato: cateto1² + cateto2² = hipotenusa²\n\n");
    
    // Busca todos os triângulos pitagóricos
    for (cateto1 = 1; cateto1 <= hipotensaMaxima; cateto1++) {
        for (cateto2 = 1; cateto2 <= cateto1; cateto2++) {
            for (hipotenusa = 1; hipotenusa <= hipotensaMaxima; hipotenusa++) {
                // Verifica se forma um triângulo pitagórico
                if ((cateto2 * cateto2) + (cateto1 * cateto1) == (hipotenusa * hipotenusa)) {
                    contador++;
                    printf("%2d. Catetos: %d e %d | Hipotenusa: %d ", 
                           contador, cateto1, cateto2, hipotenusa);
                    printf("(%d² + %d² = %d²)\n", 
                           cateto1, cateto2, hipotenusa);
                }
            }
        }
    }
    
    // Exibição dos resultados
    printf("\n=== RESUMO ===\n");
    printf("Hipotenusa maxima pesquisada: %d\n", hipotensaMaxima);
    printf("Total de triangulos pitagoricos encontrados: %d\n", contador);
    
    if (contador == 0) {
        printf("Nenhum triangulo pitagorico encontrado neste intervalo.\n");
        printf("Tente com uma hipotenusa maxima maior.\n");
    }
    
    printf("\n=== INFORMACAO EDUCATIVA ===\n");
    printf("Triangulos pitagoricos famosos:\n");
    printf("- 3, 4, 5 (3² + 4² = 5² → 9 + 16 = 25)\n");
    printf("- 5, 12, 13 (5² + 12² = 13² → 25 + 144 = 169)\n");
    printf("- 8, 15, 17 (8² + 15² = 17² → 64 + 225 = 289)\n");
    
    return 0;
}