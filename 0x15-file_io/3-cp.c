#include "main.h"
#define BUF_SIZE 1024

/**
* main - Copies the content of a file to another file.
* @argc: the number of arguments passed in
* @argv: a pointer to the array of arguments passed in
* Return: 0 if successful, otherwise a number between 97 and
 * 100 (each number represents an error)
*/

int main(int argc, char **argv)
{
	int fd, fd1, res1, res2;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* open */
	buf = malloc(sizeof(char) * BUF_SIZE);
	if (!buf)
		return (0);

	fd1 = open(argv[1], O_RDONLY);
	err_98(fd1, buf, argv[1]);
	fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	err_99(fd, buf, argv[2]);
	/* reads into buffer BUF_SIZE at a time until the whole file is read */
	do {
		res1 = read(fd1, buf, BUF_SIZE);
		if (res1 == 0)
			break;
		err_98(res1, buf, argv[1]);
		res2 = write(fd, buf, res1);
		err_99(res2, buf, argv[2]);
	} while (res1 >= BUF_SIZE);

	/* close */
	res1 = close(fd);
	err_100(res1, buf);
	res1 = close(fd1);
	err_100(res1, buf);
	free(buf);
	return (0);
}

/**
* err_98 - read Description
*
* Description: if file_from does not exist, or if you can not read it,
* \ it exits with code 98 and prints Error: Can't read from file
* \ NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error.
* \ where NAME_OF_THE_FILE is the first argument passed to program.
*
* @fd: the return value to check
* @buf: needed to free if exit
* @argv: holds the file to print
*/
void err_98(int fd, char *buf, char *argv)
{

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		free(buf);
		exit(98);
	}
}

/**
* err_99 - read Description
*
* Description: if it can not create or if write to file_to fails,
* \ it exits with code 99 and prints Error: Can't write to NAME_OF_THE_FILE,
* \ followed by a new line, on the POSIX standard error.
* \ where NAME_OF_THE_FILE is the second argument passed to program.
*
* @fd: the return value to check
* @buf: needed to free if exit
* @argv: holds the file to print
*/
void err_99(int fd, char *buf, char *argv)
{
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
		free(buf);
		exit(99);
	}
}
/**
* err_100 - read Description.
*
* Description: if it can not close a file descriptor,
* \ it exits with code 100 and prints Error: Can't close fd FD_VALUE,
* \ followed by a new line, on the POSIX standard error.
* \ where FD_VALUE is the value of the file descriptor.
*
* @fd: the return value to check
* @buf: needed to free if exit
*/
void err_100(int fd, char *buf)
{
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		free(buf);
		exit(100);
	}
}
