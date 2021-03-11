#include "variadic_functions.h"

/**
 * print_strings - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list print;
	unsigned int i;
	char *str;

	if (separator == NULL)
		separator = "";

	va_start(print, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(print, char *);
		if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);


		if (i + 1 != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(print);
}
