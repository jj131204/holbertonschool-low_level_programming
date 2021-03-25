#include "holberton.h"

/**
 * binary_to_uint -  function that converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars.
 *
 * Return: the converted number.
 */

unsigned int binary_to_uint(const char *b)
{

	int count = 0;
	unsigned  int result = 0, y = 1;

	if (!b)
		return (0);

	while (b[count])
	{
		count++;
	}

	for (count -= 1; count >= 0 ; count--)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);

		result += (b[count] - 48) * y; /*48 = codigo ascii*/
		y *= 2;
	}
	return (result);
}
