/*
 * PROGRAMA: Análise de Três Notas
 * DESCRIÇÃO: Programa que lê três notas e calcula a maior, menor e média
 * CONCEITOS: Estruturas condicionais (if/else), comparações, cálculos estatísticos
 * AUTOR: Estudos PCA
 * DATA: 22/12/2022
 */

#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    float media, maior, menor;
    
    printf("=== ANALISE DE TRES NOTAS ===\n\n");
    
    printf("Digite as tres notas separadas por espaco: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    
    // Encontra a maior nota
    if (nota1 >= nota2 && nota1 >= nota3) {
        maior = nota1;
    } else if (nota2 >= nota1 && nota2 >= nota3) {
        maior = nota2;
    } else {
        maior = nota3;
    }
    
    // Encontra a menor nota
    if (nota1 <= nota2 && nota1 <= nota3) {
        menor = nota1;
    } else if (nota2 <= nota1 && nota2 <= nota3) {
        menor = nota2;
    } else {
        menor = nota3;
    }
    
    // Calcula a média
    media = (nota1 + nota2 + nota3) / 3;
    
    printf("\n=== RESULTADOS ===\n");
    printf("Notas informadas: %.2f, %.2f, %.2f\n", nota1, nota2, nota3);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);
    printf("Media aritmetica: %.2f\n", media);
    printf("Amplitude (maior - menor): %.2f\n", maior - menor);
    
    // Verifica se todas são iguais
    if (nota1 == nota2 && nota2 == nota3) {
        printf("Observacao: Todas as notas sao iguais!\n");
    }
    
    return 0;
}