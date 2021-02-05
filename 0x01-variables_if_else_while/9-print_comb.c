#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - comma
 * Return: 0 for success
 */
int main(void)
{
int ch;

	for (ch = 0; ch <= 9; ch++)
{
	putchar(ch + '0');
	if (ch != 9)
{
	putchar(44);
	putchar(32);
}
}
	putchar('\n');
	return (0);
}
