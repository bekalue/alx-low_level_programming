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
/**
 * _isalpha - determines if the given character is aplhabetice
 * @c: the character to be evaltaed as alphabetic or not
 *
 * Return: 0 is the letter is alphabptic otherwise 1
 */
int _isalpha(int c);
/**
 * print_sign - print sign of number
 * @n: number to check
 * Return: 1 if greater than 0, 0 if 0, -1 if less than 0
 */
int print_sign(int n);
/**
 * _abs - compute absolute value of integer
 * @n: integer argument
 * Return: absolute value
 */
int _abs(int n);
