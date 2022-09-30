#include "main.h"
/**
 * main - prints number of arguments that are passed when running
 * the program but not including program name.
 * @argc: argument count
 * @argv: array of argument strings
 * Return: success (0)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
