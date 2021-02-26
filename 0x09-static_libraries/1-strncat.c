#include "holberton.h"

/**
 * _strncat - concatenates two strings.
 * @src: array with the string source
 * @dest: pointer where the text is append
 * @n: num of bytes
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
int a, b;
        for (a = 0 ; dest[a] != '\0' ; a++)
        {

        }
        for (b = 0 ; b  < n; b++)
        {
                dest[a] = src[b];
                a++;
        }
        return (dest);
}
