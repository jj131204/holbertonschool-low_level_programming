#include "holberton.h"
/**
 * _islower - Check if the entry is in lower.
 * @n: This is the entry
 *
 * Return: Always 0.
 */
int print_sign(int n)
{
int i = n % 10;
	if (i >= 1 )
{
	_putchar('+');
	return(1);
}
	else if (i == 0 )
{
	_putchar('-');
	return(0);
}
	else
{
	_putchar('-');
	return(-1);
}
}

