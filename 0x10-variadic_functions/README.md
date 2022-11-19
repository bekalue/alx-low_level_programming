# 0x10-variadic_functions

![Betty style](https://img.shields.io/badge/betty-style%20guide-purple?style=round-square)

## Learning Objectives
* What are variadic functions
* How to use `va_start`, `va_arg` and `va_end` macros
* Why and how to use the `const` type qualifier

## Resources Used
* [stdarg.h](https://en.wikipedia.org/wiki/Stdarg.h)
* [Vardiac Functions](https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html)
* [Const Keyword](https://www.youtube.com/watch?v=1W4oyuOdXv8)

## Compilation

``
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 "main function source file" "called source file" -o "executable file"
``
## Usage

``
./"executable file"
``

## Tasks Completed

+ [x] 0\. Beauty is variable, ugliness is constant<br/>_**[0-sum_them_all.c](0-sum_them_all.c)**_ contains a function that returns the sum of all its parameters.
+ [x] 1\. To be is to be the value of a variable<br/>_**[1-print_numbers.c](1-print_numbers.c)**_ contains a function that prints numbers, followed by a new line.
+ [x] 2\. One woman's constant is another woman's variable<br/>_**[2-print_strings.c](2-print_strings.c)**_ contains a function that prints strings, followed by a new line.
+ [x] 3\. To be is a to be the value of a variable<br/>_**[3-print_all.c](3-print_all.c)**_ contains a function that prints anything.
