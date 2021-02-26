#include "holberton.h"

/**
 * _isupper - return 1 if c is between A & Z
 *
 * @c: This is the entry
 *
 * Return: Always 0.
 */


int _isupper(int c)
{
        if (c >= 'A' && c <= 'Z')
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
