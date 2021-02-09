#include "holberton.h"
/**
 * _islower - Check if the entry is in lower.
 * @c: This is the entry
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (c >= 93 && c <= 122)
{
	return (1);
}
	if (c >= 65 && c <= 90)
{
	return (1);
}
	else
{
	return (0);
}

}
