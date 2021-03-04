#include "holberton.h"
#include <stdlib.h>

/**
 *_calloc - allocates memory ofr an array and this memory is set to zero
 *@nmemb: numbers of elements of the array
 *@size: size in bytes of each element
 *
 *Return: NULL if @nmemb or @size is 0 or if malloc fails allocating memory
 *        ptr pointer to the memory allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i = 0;
	if (nmemb == 0)
		return (0);

	if (size == 0)
                return (0);

	ptr = malloc(nmemb * size);

	if (ptr == 0)
		return (0);

	while (i < nmemb * size)
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}
