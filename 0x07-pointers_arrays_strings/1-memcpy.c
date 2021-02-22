#include "holberton.h"

/**
 * _memcpy - This is my function copy the number the character to S
 * @dest: This is my entry and return
 * @src: This is the character to copy
 * @n: This is the number of Bytes
 *
 * Return: This is my result and Return dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;
char *d = dest;
char const *s = src;

	for (a = 0 ; a < n ; a++)
	{
		*d++ = *s++;
	}
	return (dest);
}
