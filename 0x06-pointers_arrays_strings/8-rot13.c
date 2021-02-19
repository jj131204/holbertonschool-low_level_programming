#include "holberton.h"
/**
  * rot13 - encodes a string using rot13
  * @s: string
  * Return: pointer to s
**/
char *rot13(char *s)
{
int a, b;
char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 53; b++)
		{
			if (s[a] == abc[b])
			{
				s[a] = rot[b];
				break;
			}
		}
		b = 0;
	}
	return (s);
}
