#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string
 * Return: c
 */

unsigned int _strspn(char *s, char *accept)
{
int a, b, c;
c = 0; 

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				break;
			}
		}
		if (accept[b] != s[a])
		{
			break;
		}
	}
	return (c);
}
