#include "holberton.h"
#include <stdlib.h>
/**
 *array_range - creates an array of integers
 *@min: min value for the integers
 *@max: max value for the integers
 *
 *Return: NULL if @min > @max or if malloc fails
 */

int *array_range(int min, int max)
{
int *str;
int j;
	j = 0;
	if (min > max)
	{
		return (0);

	}
	str = malloc(((max + min) + 1) * sizeof(int));

	if (str == 0)
		return (0);
	j  = 0;
	while (j <= max)
	{
		str[j] = j;
		j++;
	}

	return (str);
}
