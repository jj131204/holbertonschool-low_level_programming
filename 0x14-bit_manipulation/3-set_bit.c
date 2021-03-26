#include "holberton.h"

/**
 * set_bit- prints the binary representation of a number.
 *
 * @n: number.
 *
 * @index: unsigned int.
 *
 * Return: value of the bit at index index or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 3)
		return (-1);

	*n ^= (1 << index);
	return (1);

}
