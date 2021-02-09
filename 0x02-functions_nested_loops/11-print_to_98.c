#include "holberton.h"
#include <stdio.h>

/**
* print_to_98- prints to 98
* @n: number
* Return:n
*
*/

void print_to_98(int n)
{
	if (n <= 98)
{
	for (; n < 98 ; n++)
		printf("%d, ", n);
		printf("%d\n", n);
}
	else
{
	for (; n > 98 ; n--)
		printf("%d, ", n);
		printf("%d\n", n);
}
}
