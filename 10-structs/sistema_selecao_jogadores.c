/*
 * PROGRAMA: Sistema de Seleção de Jogadores de Futebol
 * DESCRIÇÃO: Sistema que seleciona os melhores jogadores por posição baseado em notas
 *            Demonstra uso de arrays multidimensionais e algoritmos de seleção
 * CONCEITOS: Arrays multidimensionais, strings, estruturas condicionais,
 *            algoritmos de busca, manipulação de dados complexos
 * AUTOR: Estudos PCA
 * DATA: 16/02/2023
 * DADOS: Time Flamengo 2023
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n, k = 0;
    int pos1, pos2, pos3, pos4;
    int p1, p2, p3, p4;  // Variáveis corrigidas
    int maior = 0, maior2 = 0, maior3 = 0, maior4 = 0;
    
    // Base de dados dos jogadores
    char nomes[23][30] = {
        "Hugo Souza", "Matheus Cunha", "Santos", "Cleiton", 
        "Fabricio Bruno", "Pablo", "Matheuzinho", "Varela", 
        "Filipe Luis", "Ayrton Lucas", "Arturo Vidal", "Thiago Maia", 
        "Erick", "Gerson", "Everton Ribeiro", "De Arrascaeta", 
        "Victor Hugo", "Matheus Franca", "Gabigol", "Bruno Henrique", 
        "Pedro", "Marinho", "Everton"
    };
    
    char funcao[23][20] = {
        "Goleiro", "Goleiro", "Goleiro", "Defesa", "Defesa", "Defesa", 
        "Defesa", "Defesa", "Defesa", "Defesa", "Meio", "Meio", 
        "Meio", "Meio", "Meio", "Meio", "Meio", "Meio", 
        "Ataque", "Ataque", "Ataque", "Ataque", "Ataque"
    };
    
    int nota[23] = {8, 7, 9, 8, 7, 6, 7, 10, 9, 6, 7, 8, 10, 9, 9, 8, 8, 9, 7, 9, 8, 9, 9};

    printf("=== SISTEMA DE SELECAO DE JOGADORES ===\n\n");

    // === SELEÇÃO DO GOLEIRO (posições 0-2) ===
    printf("=== SELECAO DO GOLEIRO ===\n");
    for (i = 0; i < 3; i++) {
        if (nota[i] > maior) {
            maior = nota[i];
            pos1 = i;
        }
    }
    printf("Melhor Goleiro: %s - Nota: %d\n\n", nomes[pos1], maior);

    // === SELEÇÃO DA DEFESA (posições 3-9) ===
    printf("=== SELECAO DA DEFESA (4 melhores) ===\n");
    maior = 0; maior2 = 0; maior3 = 0; maior4 = 0;
    
    // Encontra as 4 maiores notas da defesa
    for (n = 0; n < 5; n++) {
        for (i = 3; i < 10; i++) {
            if (nota[i] > maior) {
                maior = nota[i];
            }
            if (nota[i] > maior2 && nota[i] != maior) {
                maior2 = nota[i];
            }
            if (nota[i] > maior3 && nota[i] != maior && nota[i] != maior2) {
                maior3 = nota[i];
            }
            if (nota[i] > maior4 && nota[i] != maior && nota[i] != maior2 && nota[i] != maior3) {
                maior4 = nota[i];
            }
        }   
    }
    
    // Encontra as posições correspondentes às maiores notas
    for (i = 3; i < 10; i++) {
        if (nota[i] == maior) {
            p1 = i;
        }
        if (nota[i] == maior2 && nota[i] != maior) {
            p2 = i;
        }   
        if (nota[i] == maior3 && nota[i] != maior && nota[i] != maior2) {
            p3 = i;
        }
        if (nota[i] == maior4 && nota[i] != maior && nota[i] != maior2 && nota[i] != maior3) {
            p4 = i;
        }
    }

    printf("1. %s - Nota: %d\n", nomes[p1], maior);
    printf("2. %s - Nota: %d\n", nomes[p2], maior2);
    printf("3. %s - Nota: %d\n", nomes[p3], maior3);
    printf("4. %s - Nota: %d\n\n", nomes[p4], maior4);

    // === SELEÇÃO DO MEIO-CAMPO (posições 10-17) ===
    printf("=== SELECAO DO MEIO-CAMPO (4 melhores) ===\n");
    maior = 0; maior2 = 0; maior3 = 0; maior4 = 0;
    
    for (n = 0; n < 5; n++) {
        for (i = 10; i < 18; i++) {
            if (nota[i] > maior) {
                maior = nota[i];
            }
            if (nota[i] > maior2 && nota[i] != maior) {
                maior2 = nota[i];
            }
            if (nota[i] > maior3 && nota[i] != maior && nota[i] != maior2) {
                maior3 = nota[i];
            }
            if (nota[i] > maior4 && nota[i] != maior && nota[i] != maior2 && nota[i] != maior3) {
                maior4 = nota[i];
            }
        }   
    }
    
    for (i = 10; i < 18; i++) {
        if (nota[i] == maior) {
            pos1 = i;
        }
        if (nota[i] == maior2 && nota[i] != maior) {
            pos2 = i;
        }
        if (nota[i] == maior3 && nota[i] != maior && nota[i] != maior2) {
            pos3 = i;
        }
        if (nota[i] == maior4 && nota[i] != maior && nota[i] != maior2 && nota[i] != maior3) {
            pos4 = i;
        }
    }

    printf("1. %s - Nota: %d\n", nomes[pos1], maior);
    printf("2. %s - Nota: %d\n", nomes[pos2], maior2);
    printf("3. %s - Nota: %d\n", nomes[pos3], maior3);
    printf("4. %s - Nota: %d\n\n", nomes[pos4], maior4);

    // === SELEÇÃO DO ATAQUE (posições 18-22) ===
    printf("=== SELECAO DO ATAQUE (2 melhores) ===\n");
    maior = 0; maior2 = 0;
    
    for (n = 0; n < 3; n++) {
        for (i = 18; i < 23; i++) {
            if (nota[i] > maior) {
                maior = nota[i];
            }
            if (nota[i] > maior2 && nota[i] != maior) {
                maior2 = nota[i];
            }
        }
    }
    
    for (i = 18; i < 23; i++) {
        if (nota[i] == maior) {
            pos1 = i;
        }
        if (nota[i] == maior2 && nota[i] != maior) {
            pos2 = i;
        }
    }

    printf("1. %s - Nota: %d\n", nomes[pos1], maior);
    printf("2. %s - Nota: %d\n\n", nomes[pos2], maior2);

    printf("=== TIME SELECIONADO COMPLETO ===\n");
    printf("Formacao: 4-4-2\n");

    return 0;
}