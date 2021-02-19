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
	while (s1[a] == s2[a] && s2[a] != '\0')
	{
		a++;
	}
	if (s1[a] != s2[a])
	{
		b = s1[a] - s1[a];
	}
	return (b);
}
