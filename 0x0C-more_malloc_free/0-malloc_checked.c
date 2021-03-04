#include "holberton.h"
#include  <stdlib.h>

/**
  *malloc_checked - allocated memory
  *@b: integer.
  *Return: ptr or exit 98.
*/

void *malloc_checked(unsigned int b)
{
void *str;
	str = malloc(b);

	if (str ==  0)
	{
		exit(98);
	}
	else
	{
		return (str);
	}
}
