#include "holberton.h"

/**
 * times_table - It is a table multiplication
 *
 * Return: no return
 */

void times_table(void)
{
int a, e, i;
int uni, dec;
	for (a >= 0 ; a <= 9  ;  a++)
{
	for (e >= 0 ; e <= 9  ;  a++)
{
	i =  a * e;
	uni = i % 10;
	dec = i 10;
	if (dec == 0)
	{
		_putchar(' ');
		_putchar(uni + '0');
	}
	else
	{
		_putchar(dec + '0');
		_putchar(uni + '0');
	}
	if (e < 9)
	{
		_putchar(',');
		_putchar(32);
	}
}
		_putchar('\n');
}
	return (0);
}
