#include "holberton.h"
/**
  * _strcmp - compares two strings
  * @s1: string 1
  * @s2: string 2
  * Return: integer
**/
int _strcmp(char *s1, char *s2)
{
int a= 0;
int b = 0;

	while (s1[a] == s2[a] && s1[a] != '\0')
	{
		a++;
	}
	if (s1[a] != s2[a])
		b = s1[a] - s2[a];
	return (b);
}
