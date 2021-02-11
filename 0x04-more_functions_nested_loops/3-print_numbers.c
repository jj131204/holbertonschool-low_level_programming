#include "holberton.h"

/**
 *  print_numbers - imprime numeros del 1 al 9
 *
 *
 *
 * Return: return las digit
 **/

void print_numbers(void)
{
int i;
	for (i = '0' ; i <= '9' ; i++)
		putchar(i);
		putchar('\n');
}
