#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;

	unsigned int i;
	printf ("%s", separator);

	if (separator == NULL)

		separator = "";

	va_start(num, n);
	for (i = 0; i < n; i++)
	{

		if (i == (n - 1))
			printf("%d", va_arg(num, int));
		else
			printf("%d%s", va_arg(num, int), separator);
	}
	printf("\n");
	va_end(num);
}
