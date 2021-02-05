#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Putchar Z to A
 * Return: 0 for success
 */
int main(void)
{
char ch = 'a';

	for (ch = 'z'; ch >= 'a'; ch--)
	putchar(ch);

	putchar('\n');

	return (0);
}
