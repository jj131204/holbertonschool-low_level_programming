#include "holberton.h"

/**
 * _isdigit - return 1 if c  between 0 & 9
 *
 * @c: This is the entry
 *
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
