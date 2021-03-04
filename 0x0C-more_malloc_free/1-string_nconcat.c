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
unsigned int a = 0, b = 0;
	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	while (s1[a])
		a++;

	while (s2[b])
		b++;

	n = b + 1;
	str = malloc(sizeof(char) * (a + n));
	if (str  == 0)
		return (0);

	for (a = 0; s1[a]; a++)
		str[a] = s1[a];

	for (b = 0; s2[b]; a++, b++)
	{
		str[a] = s2[b];
	}
	str[a] = '\0';
	return (str);
}
