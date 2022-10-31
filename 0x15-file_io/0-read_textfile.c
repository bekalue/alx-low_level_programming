#include "main.h"
/**
* read_textfile - reads a text file and prints it to stdout
* @filename: the file name to read from
* @letters: the number of letters it should read and print
* Return: the actual number of letters it could read and print
* otherwise an error return 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, len, res;
	char *string;

	if (!filename)
		return (0);
	string = malloc(sizeof(char) * letters);
	if (!string)
		return (0);

	/**Open*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	len = read(fd, string, letters);
	string[letters] = '\0';
	len++;

	/**close*/
	res = close(fd);
	if (res != 0)
		exit(-1);

	res = write(STDOUT_FILENO, string, len);
	if (res != len)
		return (0);
	free(string);

	return (len);
}
