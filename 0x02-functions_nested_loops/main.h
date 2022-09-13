#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
/**
 * print_alphabet - prints alphabets
 *
 * returns: 0 (success)
 */
void print_alphabet(void);
/**
 * print_alphabet_x10 - prints alphabets 10 times.
 *
 * returns: 0 (success)
 */
void print_alphabet_x10(void);
/**
 * _islower - cheaks if the character is lowercase
 * @c: the charater to be determined if it is lower or not
 * Return: 1 if losercase or 0 if not
 */
int _islower(int c);
