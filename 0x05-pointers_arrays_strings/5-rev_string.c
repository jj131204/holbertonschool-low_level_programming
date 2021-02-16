#include "holberton.h"

/**
  * rev_string - reverse a string
  * @s: string coming
  * Return: void
*/
void rev_string(char *s)
{
int a;
int n;
char b, c;
	for (a = 0; s[a] != '\0'; a++)
	{
	}
	a--;
	for (n = 0; n <= a ; n++)
	{
		b = s[n];
		c = s[a];

		s[n] = c;
		s[a] = b;
		a--;
	}
}
