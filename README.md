# 📘 Introdução à Linguagem C - PCA

Este repositório reúne os principais conteúdos e exercícios introdutórios da linguagem de programação C, abordados na disciplina de **Programação de Computadores e Algoritmos (PCA)**.

## 🎯 Objetivo

Oferecer uma base sólida dos principais conceitos da linguagem C para iniciantes, com foco em lógica de programação, estruturação de código, boas práticas e resolução de problemas clássicos de algoritmos.

## 📚 Conteúdo

### 🔹 1. Fundamentos
- História da linguagem C
- Estrutura básica de um programa em C
- Compilação e execução
- `stdio.h`, `stdlib.h` e outras bibliotecas padrão

### 🔹 2. Variáveis e Tipos de Dados
- Tipos primitivos: `int`, `float`, `char`, `double`
- Constantes e modificadores (`short`, `long`, `unsigned`)
- Declaração, inicialização e escopo de variáveis

### 🔹 3. Operadores
- Aritméticos: `+`, `-`, `*`, `/`, `%`
- Relacionais: `==`, `!=`, `<`, `>`, `<=`, `>=`
- Lógicos: `&&`, `||`, `!`
- Atribuição: `=`, `+=`, `-=`, etc.

### 🔹 4. Estruturas de Controle
- Condicionais: `if`, `else`, `switch`
- Laços: `for`, `while`, `do...while`
- `break`, `continue`

### 🔹 5. Funções
- Declaração e definição
- Parâmetros e retorno
- Escopo de variáveis
- Recursividade

### 🔹 6. Arrays e Strings
- Arrays unidimensionais e multidimensionais
- Manipulação de strings com `string.h`

### 🔹 7. Ponteiros (Introdução)
- Conceito de ponteiros
- Operadores `&` e `*`
- Ponteiros e arrays

### 🔹 8. Estruturas e Tipos definidos pelo usuário
- `struct`, `typedef`
- Declaração e acesso a membros

## 🗂️ Organização do repositório

| Pasta | Tema |
|---|---|
| `01-Conceitos-Basicos` | Entrada, saída e operações simples |
| `02-Operacoes-Matematicas` | Expressões, calculadoras e exercícios de prova |
| `03-Estruturas-Condicionais` | `if`/`else` e `switch` aplicados a validação e classificação |
| `04-Estruturas-Repeticao` | Laços: tabuada, estatísticas, maior e menor valor |
| `05-Funcoes` | Funções e recursão (fatorial, hiperfatorial) |
| `06-Arrays-Vetores` | Vetores e matrizes |
| `07-Strings` | Manipulação de strings e parser de datas |
| `08-Ponteiros` | Ponteiros e aritmética de ponteiros |
| `09-Alocacao-Dinamica` | `malloc`/`free` com vetores e matrizes |
| `10-Estruturas-Complexas` | `struct`: simulador de decaimento radioativo, seleção de jogadores |
| `11-Exercicios-Avancados` | Desvio padrão, triângulos pitagóricos, otimização numérica |
| `Backups-Originais` | Arquivos como foram escritos em aula (nomeados pela data, `AAAAMMDD_NNN.c`) antes da organização por tema |

## ▶️ Como compilar

Cada arquivo é um programa independente:

```sh
gcc -Wall -o programa "05-Funcoes/calculadora_fatorial.c" -lm
./programa
```

## 📄 Licença

[MIT](LICENSE)

