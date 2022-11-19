# 0x09-static_libraries

![Betty style](https://img.shields.io/badge/betty-style%20guide-purple?style=round-square)

## Learning Objectives

[Static Library](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)
* What is a static library, how does it work, how to create one, and how to use it
* Basic usage of `ar`, `ranlib`, `nm`

[Difference b/n Dynamic and Static Library](https://www.youtube.com/watch?v=eW5he5uFBNM)

## Tasks Completed

+ [x] 0\. A library is not a luxury but one of the necessities of life<br/>_**[libmy.a](libmy.a)**_ is a static library containing the functions below.
```c
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```
+ [x] 1\. Without libraries what have we? We have no past and no future<br/>_**[create_static_lib.sh](create_static_lib.sh)**_ creates a static library called `liball.a` from all the `.c` files that are in the current directory.
