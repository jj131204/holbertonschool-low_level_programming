#include "holberton.h"

/**
 * create_file - function that reads a text file and prints.
 * @filename : file
 * @text_content : is the number of letters
 * Return: 1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int a  = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fd == -1)
		return (-1);

	while (text_content[a])
		a++;

	write(fd, text_content, a);

	close(fd);
	return (1);
}
