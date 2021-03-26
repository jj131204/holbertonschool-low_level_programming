#include "holberton.h"

/**
 * flip_bits - Returns the number of bits you would need to
 *           flip to get from one number to another.
 * @n: The number.
 * @m: The number to flip to.
 *
 * Return: number of bits to flip from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int prueba, num_bits = 0;

	prueba = n ^ m;
	while (prueba > 0)
	{
		num_bits += (prueba & 1);
		prueba = prueba >> 1;
	}

	return (num_bits);
}
