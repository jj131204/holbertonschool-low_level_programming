#include "holberton.h"

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 3)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
