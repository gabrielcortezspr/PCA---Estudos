/*
 * PROGRAMA: Manipulação Avançada de Strings
 * DESCRIÇÃO: Programa que demonstra diversas operações com strings: inversão,
 *            remoção de vogais, conversão para maiúsculas, contagem de caracteres
 *            e remoção de caracteres específicos
 * CONCEITOS: Strings, funções de string.h, ctype.h, manipulação de caracteres,
 *            loops, funções definidas pelo usuário
 * AUTOR: Estudos PCA
 * DATA: 31/01/2023
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função que imprime a string de trás para frente
void tpf(char a[50]) {
    int i;
    printf("String invertida: ");
    for (i = strlen(a) - 1; i >= 0; i--) {
        printf("%c", a[i]);
    }    
    printf("\n");
}

// Função que imprime a string sem vogais
void isv(char a[50]) {
    int i;
    printf("String sem vogais: ");
    for (i = 0; i < strlen(a); i++) {
        // Verifica se não é uma vogal (maiúscula ou minúscula)
        if (a[i] != 'a' && a[i] != 'A' && 
            a[i] != 'e' && a[i] != 'E' && 
            a[i] != 'i' && a[i] != 'I' && 
            a[i] != 'o' && a[i] != 'O' && 
            a[i] != 'u' && a[i] != 'U') {
            printf("%c", a[i]);
        }
    }
    printf("\n");        
}

// Função que converte toda a string para maiúsculas
void maius(char a[50]) {
    int i; 
    printf("String em maiusculas: ");
    for (i = 0; i < strlen(a); i++) {
        a[i] = toupper(a[i]);    
    }
    printf("%s\n", a);
}

// Função que conta quantas vezes uma letra aparece na string
void volta(char a[50]) {
    int i, cont = 0;
    char l;
    printf("\nQual letra deseja procurar? ");
    scanf(" %c", &l);
    
    for (i = 0; i < strlen(a); i++) {
        if (a[i] == l || a[i] == toupper(l) || a[i] == tolower(l)) {
            cont++;            
        }
    }
    printf("A letra '%c' apareceu %d vezes na string.\n", l, cont);
}    

// Função que remove um caractere específico da string
void apaga(char a[50]) {
    int i;
    char carac;
    printf("\nQual caractere deseja remover? ");
    scanf(" %c", &carac);
    
    printf("String sem o caractere '%c': ", carac);
    for (i = 0; i < strlen(a); i++) {
        // Imprime apenas se o caractere for diferente do que queremos remover
        if (a[i] != carac && a[i] != toupper(carac) && a[i] != tolower(carac)) {
            printf("%c", a[i]);
        }     
    }
    printf("\n");
}        

int main() {
    char a[50];
    
    printf("=== MANIPULACAO DE STRINGS ===\n");
    printf("Digite uma palavra ou frase: ");
    scanf("%49s", a);  // Limita entrada para evitar overflow
    
    printf("\n=== RESULTADOS ===\n");
    printf("String original: %s\n", a);
    
    // Executa todas as operações
    tpf(a);     // String invertida
    isv(a);     // String sem vogais
    maius(a);   // String em maiúsculas
    volta(a);   // Conta occorrências de uma letra
    apaga(a);   // Remove um caractere
    
    return 0;
}
