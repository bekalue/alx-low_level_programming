#include "main.h"
/**
 * main - prints number of arguments that are passed when running
 * the program.
 * @argc: argument count
 * @argv: array of argument strings
 * Return: success (0)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	if (argc > 1)
	{
		printf("%d\n", argc);
	}
	else
	{
		argc = 0;
		printf("%d\n", argc);
	}
	return (0);
}
