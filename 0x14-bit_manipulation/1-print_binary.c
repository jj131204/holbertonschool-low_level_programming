#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: number.
 *
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	if ((n & 1) == 1)
		printf("1");

	else
		printf("0");
}
