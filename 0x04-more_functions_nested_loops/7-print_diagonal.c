#include "holberton.h"

/**
* print_diagonal - imprime
*
* @n: variable
*
*/

void print_diagonal(int n)
{
int a, b;

	for (a = 0 ; a < n ; a++)
	{
		for (b = 0 ; b < a ; b++)
		{
			_putchar(' ');
		}
	_putchar(92);
	if (a < (n - 1))
		{
		_putchar('\n');
		}
	}
	_putchar('\n');
}
