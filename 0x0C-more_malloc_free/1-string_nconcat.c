#include "holberton.h"
#include <stdlib.h>
/**
 *string_nconcat - concatenates two strings
 *@s1: pointer to the first string
 *@s2: pointer to the second string
 *@n: number of bytes used fron second string
 *
 *Return: NULL if malloc fails allocating memory
 *        ptr pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int a = 0, b = 0, i;
	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	while (s1[a])
		a++;

	while (s2[b])
		b++;
	a++;
	if (n >= b)
		n = b;
	str = malloc(sizeof(char) * (a + n));
	if (str  == 0)
		return (0);

	for (i = 0; s1[i]; i++)
		str[i] = s1[i];
	for (; i - a + 1 < n && s2[i - a + 1]; i++)
		str[i] = s2[i - a + 1];
	str[i] = '\0';

	return (str);
}
