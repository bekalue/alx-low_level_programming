# 0x00-hello_world

![Betty style](https://img.shields.io/badge/betty-style%20guide-purple?style=round-square)

## Learning objectives

* Why __C__ programming is awesome
* Who invented C
* Who are [Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie), [Brian Kernighan](https://www.youtube.com/watch?v=de2Hsvxaf8M) and Linus Torvalds
* What happens when you type `gcc main.c`
* What is an entry point
* What is `main`
* How to print text using `printf`, `puts` and `putchar`
* How to get the size of a specific type using the unary operator `sizeof`
* How to compile using `gcc`
* What is the default program name when compiling with `gcc`
* What is the official __C__ coding style and how to check your code with [betty-style](https://github.com/holbertonschool/Betty/wiki)
* How to find the right header to include in your source code when using a standard library function
* How does the `main` function influence the return value of the program

## Resourcess Used

* [0x00. C - Hello, World](https://www.youtube.com/watch?v=co0b0xLEuRM&t=11s)
* [Why __c__ Programming is Awesome](https://www.youtube.com/watch?v=smGalmxPVYc)
* [Learning to Program in __c__ Part |](https://www.youtube.com/watch?v=rk2fK2IIiiQ)
* [Learning to Program in __c__ Part ||](https://www.youtube.com/watch?v=FwpP_MsZWnU)
* [Understanding __c__ Program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA)
* [Hash-Bang Under the Hood](https://twitter.com/unix_byte/status/1024147947393495040?s=21)
* [Linus Torvalds on __c__ vs __c++__](http://harmful.cat-v.org/software/c++/linus)
* man `gcc`
* man 3 `printf`
* man `puts`
* man `putchar`

## Tasks Completed

+ [x] 0\. Preprocessor<br/>_**[0-preprocessor](0-preprocessor)**_ runs a C file through the preprocessor and save the result into another file. The C file name will be saved in the variable `$CFILE`. The output would be saved in the file `c`.
+ [x] 1\. Compiler<br/>_**[1-compiler](1-compiler)**_ compiles a C file but does not link. The C file name will be saved in the variable `$CFILE`. The output file would be named the same as the C file, but with the extension `.o` instead of `.c`.
+ [x] 2\. Assembler<br/>_**[2-assembler](2-assembler)**_ generates the assembly code of a C code and save it in an output file. The C file name will be saved in the variable `$CFILE`. The output file would be named the same as the C file, but with the extension `.s` instead of `.c`.
+ [x] 3\. Name<br/>_**[3-name](3-name)**_ compiles a C file and creates an executable named `cisfun`. The C file name will be saved in the variable `$CFILE`.
+ [x] 4\. Hello, puts<br/>_**[4-puts.c](4-puts)**_ prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line using the function `puts` rather than `printf`.
+ [x] 5\. Hello, printf<br/>_**[5-printf.c](5-printf.c)**_ prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line using the function `printf` rather than the function `puts`. The program should compile without warning when using the `-Wall` `gcc` option.
+ [x] 6\. Size is not grandeur, and territory does not make a nation<br/>_**[6-size.c](6-size.c)**_ prints the size of various types on the computer it is compiled and run on. You might have to install the package `libc6-dev-i386` on your Linux system to test the `-m32` `gcc` option.
+ [x] 7\. Intel<br/>_**[100-intel](100-intel)**_ generates the assembly code (Intel syntax) of a C code and save it in an output file. The C file name will be saved in the variable `$CFILE`. The output file would be named the same as the C file, but with the extension `.s` instead of `.c`.
+ [x] 8\. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity<br/>_**[101-quote.c](101-quote.c)**_ prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error.The functions listed in the NAME section of the man (3) `printf` or man (3) `puts` would not be used. The return value of the program would be 1 and would compile without any warnings when using the `-Wall` `gcc` option.
