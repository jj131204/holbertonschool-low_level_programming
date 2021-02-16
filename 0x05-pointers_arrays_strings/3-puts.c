#include "holberton.h"
#include <stdio.h>

/**
 * _puts : puntero
 *@str : pointer
 * Return: Always 0. (sucess)
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 1;
	}
	_putchar('\n');
}
