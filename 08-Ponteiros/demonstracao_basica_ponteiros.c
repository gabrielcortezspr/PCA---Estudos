/*
 * PROGRAMA: Demonstração Básica de Ponteiros
 * DESCRIÇÃO: Programa que demonstra o uso básico de ponteiros com diferentes tipos
 *            de dados: int, double e char
 * CONCEITOS: Ponteiros, operadores de endereço (&) e desreferenciamento (*),
 *            manipulação indireta de variáveis
 * AUTOR: Estudos PCA
 * DATA: 07/03/2023
 */

#include <stdio.h>

int main() {
    // Declaração de variáveis com valores iniciais
    int i = 2;
    double j = 32.22;
    char a = 'a';

    // Declaração de ponteiros e inicialização com endereços das variáveis
    int* ii = &i;
    double* jj = &j;
    char* aa = &a;

    printf("=== DEMONSTRACAO DE PONTEIROS ===\n\n");
    
    printf("=== VALORES INICIAIS ===\n");
    printf("Endereco de i: %p, Valor: %d\n", (void*)&i, i);
    printf("Endereco de j: %p, Valor: %.3f\n", (void*)&j, j);
    printf("Endereco de a: %p, Valor: %c\n", (void*)&a, a);
    
    printf("\n=== ACESSANDO VIA PONTEIROS ===\n");
    printf("Ponteiro ii aponta para: %p, Valor apontado: %d\n", (void*)ii, *ii);
    printf("Ponteiro jj aponta para: %p, Valor apontado: %.3f\n", (void*)jj, *jj);
    printf("Ponteiro aa aponta para: %p, Valor apontado: %c\n", (void*)aa, *aa);

    // Modificando valores através dos ponteiros
    printf("\n=== MODIFICANDO VALORES VIA PONTEIROS ===\n");
    *ii = 4;
    *jj = 3.0;
    *aa = 'b';

    printf("Novos valores:\n");
    printf("i (via *ii): %d\n", *ii);
    printf("j (via *jj): %.3f\n", *jj);
    printf("a (via *aa): %c\n", *aa);
    
    printf("\n=== VERIFICANDO VARIAVEIS ORIGINAIS ===\n");
    printf("i: %d, j: %.3f, a: %c\n", i, j, a);
    printf("As variaveis originais foram modificadas atraves dos ponteiros!\n");
    
    return 0;
}
