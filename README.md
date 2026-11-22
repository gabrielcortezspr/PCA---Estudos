# C Programming Fundamentals

![C](https://img.shields.io/badge/C-11-A8B9CC?logo=c&logoColor=black)
[![build](https://github.com/gabrielcortezspr/PCA---Estudos/actions/workflows/build.yml/badge.svg)](https://github.com/gabrielcortezspr/PCA---Estudos/actions/workflows/build.yml)
![License](https://img.shields.io/badge/license-MIT-green)

64 C programs written for the **Computer Programming and Algorithms** course (PCA) of my
Computer Engineering degree, organized by topic, from basic I/O up to pointers, dynamic
memory and structs. Every file is a standalone program and the whole set is compiled on every
push by GitHub Actions.

## Contents

| Folder | Topic | Examples |
|---|---|---|
| [`01-basics`](01-basics) | Input/output, variables, simple expressions | average of grades, sums |
| [`02-arithmetic`](02-arithmetic) | Arithmetic and unit conversion | salary with deductions, tip calculator, °C ↔ °F, series |
| [`03-conditionals`](03-conditionals) | `if`/`else`, `switch`, input validation | grade analysis, delivery-type recommendation from fetal weight and gestation time |
| [`04-loops`](04-loops) | `for`, `while`, `do…while` | primes, perfect numbers, **Newton's method for √x**, multiplication table |
| [`05-functions`](05-functions) | Functions and recursion | factorial, hyperfactorial, Fibonacci, binary → decimal, digit permutations |
| [`06-arrays-and-matrices`](06-arrays-and-matrices) | 1D and 2D arrays | dot product, matrix sum and element-wise product, dice-roll histogram |
| [`07-strings`](07-strings) | `string.h`, parsing | palindrome check, date validation and parsing |
| [`08-pointers`](08-pointers) | Pointers and pointer arithmetic | character search returning positions, sub-array printing |
| [`09-dynamic-memory`](09-dynamic-memory) | `malloc`/`free` | dynamically allocated matrices |
| [`10-structs`](10-structs) | `struct`, `typedef` | radioactive decay simulator, team registration, player selection |
| [`11-advanced-exercises`](11-advanced-exercises) | Putting it all together | mean and standard deviation, Pythagorean triples, numerical function optimizer |

Files ending in `_prova` were exam questions. Code, comments and program output are in
Portuguese.

## Building

```bash
make               # compiles every program into build/<folder>/<name>
./build/04-loops/raiz_quadrada_newton
```

Or a single file:

```bash
gcc -Wall -o fibonacci 05-functions/sequencia_fibonacci.c -lm
```

## Archive

[`archive/original-class-files`](archive/original-class-files) keeps the files exactly as
they were written during class (named by date, `YYYYMMDD_NNN.c`), before being cleaned up and
sorted into the folders above.

## License

[MIT](LICENSE)
