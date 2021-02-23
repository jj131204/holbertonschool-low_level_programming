#include "holberton.h"
/**
 * print_number - prints any number with putchar
 * @n: number to print
 * Return: numbers
 */
void print_number(int n)
{
	unsigned int a;

	if (n < 0)
	{
		_putchar('-');
		a = -n;
	}
	else
		a = n;
	if (a / 10)
	{
		print_number(a / 10);
	}
	_putchar(a % 10 + '0');
}
