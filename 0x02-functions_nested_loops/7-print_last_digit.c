#include "holberton.h"

/**
 * print_last_digit - ultimo digito de un numero
 *
 * @n: entry point
 *
 * Return: return las digit
 **/

int print_last_digit(int n)
{
int d;
	d = n % 10;
	/*_putchar (d + '0');*/
	/*return ('d');*/

	if (d < 0)
	{
		_putchar(-d + 48);
		return (-d);
	}
	else
	{
		_putchar(d + 48);
		return (d);
	}
}
