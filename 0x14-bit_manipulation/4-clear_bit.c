#include "holberton.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 *
 * @n: number.
 *
 * @index: unsigned int.
 *
 * Return: value of the bit at index index or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 3)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
