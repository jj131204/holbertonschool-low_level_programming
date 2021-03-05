#include "holberton.h"
#include <stdlib.h>

/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: pointer to the old memory block
 *@old_size: lenght of the old memory block
 *@new_size: lenght of new block of memory
 *
 *Return: NULL if @new_size is equal to zero or malloc fails
 *        ptr if @new_size is equal to @old_size
 *        ptr2 pointer to the new block of memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *str;
unsigned int i = 0, min = 0;
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (0);
	}
	str = malloc(new_size);
	if (str == 0)
		return (0);

	if (ptr == 0)
	{
		free(ptr);
		return (str);
	}
	else
	{
		if (new_size > old_size)
			min = old_size;
		else
			min = new_size;
		while (i < min)
		{
			str[i] = ((char *)ptr)[i];
			i++;
		}
	}
	free(ptr);
	return (str);

}
