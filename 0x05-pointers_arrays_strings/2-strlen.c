#include "holberton.h"

/**
 * _strlen - This function
 *
 * @s: this is my
 *
 * Return: the las
 */
int _strlen(char *s)
{
int longitud = 0;
	while (*s != '\0')
	{
		longitud++;
		s = s + 1;
	}
	return (longitud);

}
