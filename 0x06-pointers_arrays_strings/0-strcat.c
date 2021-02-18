#include "holberton.h"

/**
 * _strcat -  concatenates two strings.
 * @src: array with the string source
 * @dest: pointer where the text is append
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
int a, b;
	for (a = 0 ; dest[a] != '\0' ; a++)
	{

	}
	for (b = 0 ; src[b] != '\0' ; b++)
	{
		dest[a] = src[b];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
