#include "holberton.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename : file
 * @text_content : is the number of letters
 * Return: 1 or -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int a = 0, b = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (text_content)
	{
		while (text_content[a])
			a++;
	}
	b = write(fd, text_content, a);

	if (b == -1)
		return (-1);

	close(fd);
	return (1);
}
