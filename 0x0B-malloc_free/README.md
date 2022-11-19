# 0x0B. C - malloc, free

![Betty style](https://img.shields.io/badge/betty-style%20guide-purple?style=round-square)

## Learning Objectives

[Dynamic Memory allocation in c](https://www.youtube.com/watch?v=xDVC3wKjS64)
* What is the difference between automatic and dynamic allocation
* What is malloc and free and how to use them
* Why and when use malloc
* How to use valgrind to check for memory leak

## Compilation

`gcc -Wall -Werror -Wextra -pedantic -std=gnu89`

## Tasks Completed

+ [x] 0\. Float like a butterfly, sting like a bee<br/>_**[0-create_array.c](0-create_array.c)**_ contains a function that creates an array of chars, and initializes it with a specific char.
+ [x] 1\. The woman who has no imagination has no wings<br/>_**[1-strdup.c](1-strdup.c)**_ contains a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
+ [x] 2\. He who is not courageous enough to take risks will accomplish nothing in life<br/>_**[2-str_concat.c](2-str_concat.c)**_ contains a function that concatenates two strings.
+ [x] 3\. If you even dream of beating me you'd better wake up and apologize<br/>_**[3-alloc_grid.c](3-alloc_grid.c)**_ contains a function that returns a pointer to a 2 dimensional array of integers.
+ [x] 4\. It's not bragging if you can back it up<br/>_**[4-free_grid.c](4-free_grid.c)**_ contains a function that frees a 2 dimensional grid previously created by my `[alloc_grid](3-alloc_grid.c)` function.
+ [x] 5\. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe<br/>_**[100-argstostr.c](100-argstostr.c)**_ contains a function that concatenates all the arguments of your program.
+ [x] 6\. I will show you how great I am<br/>_**[101-strtow.c](101-strtow.c)**_ contains a function that splits a string into words.
