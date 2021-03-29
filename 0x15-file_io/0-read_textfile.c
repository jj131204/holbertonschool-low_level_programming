#include "holberton.h"



ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int i = 0, j = 0;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(letters));
	if (buffer == NULL)
		return (0);	

	i = read(fd, buffer, letters);

	if (i == -1)
		return (0);

	close(fd); /*close files*/

	j = write(STDOUT_FILENO, buffer, i); /*write file*/

	if (j == -1)
		return (0);

	return (j);

}
