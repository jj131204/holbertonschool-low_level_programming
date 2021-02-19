#include "holberton.h"
/**
 * _strcmp - compare two strings.
 * @s1: string 1
 * @s2: string 2
 *
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
int a, b;
a = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
	a++;
		if (s1[a] == s2[a])
		{
			b = s1[a] + s2[a];
		}
		else
		{
			b = s1[a] - s2[a];
		}

	}
	return (b);
}
