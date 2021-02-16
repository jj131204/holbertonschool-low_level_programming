#include "holberton.h"
#include <stdio.h>

/**
 * print_rev - prototipo
 *@s: pointcater
 * Return: Always 0. (sucess)
 */

void print_rev(char *s)
{
int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		b = a;
	}
	for (; s[b] != '\0'; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
