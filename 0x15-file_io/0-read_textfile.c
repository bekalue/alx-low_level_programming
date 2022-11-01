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
	int fd;
	ssize_t res, len;
	char *string;

	if (!filename)
		return (0);
	string = malloc(sizeof(char) * letters);
	if (!string)
		return (0);

	/*open the file*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/*read the file based of number of letters bytes*/
	len = read(fd, string, letters);
	string[letters] = '\0';
	if (len == -1)
		return (0);

	/*close the file*/
	res = close(fd);
	if (res != 0)
		exit(-1);

	/*print the string to stdout*/
	res = write(STDOUT_FILENO, string, len);
	if (res == -1)
		return (0);
	/*free the string*/
	free(string);
	return (len);
}
