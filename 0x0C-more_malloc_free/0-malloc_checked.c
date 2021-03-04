#include "holberton.h"
#include  <stdlib.h>

void *malloc_checked(unsigned int b)
{
void *j;
	j = malloc(sizeof(int) * (b + 1));

	if (j ==  0)
	{
		exit(98);
	}
	else 
	{
		return (j);
	}
}
