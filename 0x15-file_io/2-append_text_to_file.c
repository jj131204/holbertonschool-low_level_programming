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
	int a = 0;

	if (!filename || !text_content)
		return (-1);


	fd = open(filename, O_WRONLY | O_APPEND);


	while (text_content[a])
		a++;

	write(fd, text_content, a);

	return (1);
}
