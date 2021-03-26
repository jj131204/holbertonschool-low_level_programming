#include "holberton.h"

/**
 * get_bit- prints the binary representation of a number.
 *
 * @n: number.
 *
 * @index: unsigned int.
 *
 * Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 2)
		return (-1);

	else
		return ((n >> index) & 1);
}
