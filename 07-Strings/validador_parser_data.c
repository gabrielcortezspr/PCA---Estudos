/*
 * PROGRAMA: Parsing e Validação de Data
 * DESCRIÇÃO: Programa que valida e decompõe uma data no formato DD/MM/YYYY
 * CONCEITOS: Strings, validação de entrada, manipulação de caracteres,
 *            conversão de caracteres para números, funções ctype.h
 * AUTOR: Estudos PCA
 * DATA: 31/01/2023
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char date[11];
    int day, month, year;

    printf("=== VALIDADOR E PARSER DE DATA ===\n\n");
    
    printf("Digite uma data no formato DD/MM/YYYY: ");
    scanf("%10s", date);

    // Validação do formato da data
    if (strlen(date) != 10 || date[2] != '/' || date[5] != '/' ||
        !isdigit(date[0]) || !isdigit(date[1]) || !isdigit(date[3]) ||
        !isdigit(date[4]) || !isdigit(date[6]) || !isdigit(date[7]) ||
        !isdigit(date[8]) || !isdigit(date[9])) {
        
        printf("Erro: Formato de data invalido!\n");
        printf("Use o formato DD/MM/YYYY (ex: 15/03/2023)\n");
        return 1;
    }

    // Extração dos componentes da data
    day = (date[0] - '0') * 10 + (date[1] - '0');
    month = (date[3] - '0') * 10 + (date[4] - '0');
    year = (date[6] - '0') * 1000 + (date[7] - '0') * 100 +
           (date[8] - '0') * 10 + (date[9] - '0');

    // Validação básica dos valores
    if (day < 1 || day > 31) {
        printf("Erro: Dia deve estar entre 1 e 31!\n");
        return 1;
    }
    if (month < 1 || month > 12) {
        printf("Erro: Mes deve estar entre 1 e 12!\n");
        return 1;
    }
    if (year < 1900 || year > 2100) {
        printf("Erro: Ano deve estar entre 1900 e 2100!\n");
        return 1;
    }

    // Exibe os resultados
    printf("\n=== RESULTADO DA ANALISE ===\n");
    printf("Data original: %s\n", date);
    printf("Dia: %d\n", day);
    printf("Mes: %d\n", month);
    printf("Ano: %d\n", year);
    
    // Informações adicionais
    char *meses[] = {"", "Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho",
                     "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    
    printf("Data por extenso: %d de %s de %d\n", day, meses[month], year);

    return 0;
}
