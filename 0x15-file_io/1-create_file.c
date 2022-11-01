#include "main.h"

/**
* create_file - creates a file
* @filename: the filename to create
* @text_content: a NULL terminated string to write to the file
* Return: 1 (Success),  -1 (failure)
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t res;

	if (!filename)
		return (-1);
	/*open the file*/
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRWXU);
	if (fd == -1)
		return (-1);
	/*return if text_content is null*/
	if (!text_content)
		return (1);

	res = write(fd, text_content, strlen(text_content));
	if (res == -1)
		return (-1);
	/*close*/
	res = close(fd);
	if (res != 0)
		exit(-1);
	return (1);
}
