#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;

	int c;
	unsigned int i;

	if (n == 0)
		return (0);

	c = 0;
	va_start(sum, n);

	for (i = 0; i < n; i++)
	{
		c += va_arg(sum, int);
	}
	va_end(sum);

	return (c);
}
