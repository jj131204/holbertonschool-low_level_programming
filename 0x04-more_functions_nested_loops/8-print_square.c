#include "holberton.h"

/**
* print_square - imprime #
*
* @size: variable
*
*/

void print_square(int size)
{
	int i, c;

	for (i = 0; i < size; i++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar(35);
		}
	if (i != (size - 1))
		_putchar('\n');
	}
	_putchar('\n');
}
