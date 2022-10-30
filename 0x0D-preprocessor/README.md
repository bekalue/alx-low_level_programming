# 0x0D-preprocessor

![Betty style](https://img.shields.io/badge/betty-style%20guide-purple?style=round-square)

## Learning Objectives

What are macros and how to use them

What are the most common predefined macros

How to include guard your header files

## Compilation

`gcc -Wall -Werror -Wextra -pedantic -std=gnu89`

## Tasks Completed

+ [x] 0\. Object-like Macro<br/>_**[0-object_like_macro.h](0-object_like_macro.h)**_ is a header file that defines a macro named `SIZE` as an abbreviation for the token `1024`.
+ [x] 1\. Pi<br/>_**[1-pi.h](1-pi.h)**_ is a header file that defines a macro named `PI` as an abbreviation for the token `3.14159265359`.
+ [x] 2\. File name<br/>_**[2-main.c](2-main.c)**_ is a program that prints the name of the file it was compiled from, followed by a new line.
+ [x] 3\. Function-like macro<br/>_**[3-function_like_macro.c](3-function_like_macro.h)**_ contains a function-like macro `ABS(x)` that computes the absolute value of a number `x`.
+ [x] 4\. SUM<br/>_**[4-sum.h](4-sum.h)**_ contains a function-like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`.
