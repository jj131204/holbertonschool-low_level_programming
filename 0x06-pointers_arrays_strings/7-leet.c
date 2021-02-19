#include "holberton.h"
/**
 * leet - encodes a string into 1337..
 * @s: string to encode
 *
 * Return: Always 0.
 */
char *leet(char *s)
{
	int a;
	int b;
	char arr_letras[] = "aAeEoOtTlL";
	char arr_numeros[] = "4433007711";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; arr_letras[b] != '\0'; b++)
		{
			if (s[a] == arr_letras[b])
			{
				s[a] = arr_numeros[b];
			}
		}
	}
	return (s);
}
