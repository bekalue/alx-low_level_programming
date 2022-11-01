#include "main.h"

/**
* append_text_to_file - appens text at the end of a file
* @filename: the file to append to
* @text_content: the text that will be appended to the file
* Return: 1 (Success), -1 (Failure)
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, res;

	if (!filename)
		return (-1);
	/*open the file*/
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		len = 0;
		while (text_content[len])
			len++;
		res = write(fd, text_content, len);
		if (res == -1)
			return (-1);

		res = close(fd);
		if (res != 0)
			exit(-1);
		return (1);
	}
	res = close(fd);
	if (res != 0)
		exit(-1);
	return (1);
}
