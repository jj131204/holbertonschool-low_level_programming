#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - main function
 *
 * @src: The source
 *
 * @dest: The destination
 *
 *return : retorna dest
 */

char *_strcpy(char *dest, char *src)
{
int a;
	for (a = 0 ; src[a] ; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}
