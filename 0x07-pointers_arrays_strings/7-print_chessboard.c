#include "holberton.h"
/**
 * print_chessboard - prints the chessboard
 * @a: is the array of the chessboard
 * Return: void
**/

void print_chessboard(char (*a)[8])
{
	int i = 0, b = 0;

	for (i = 0; i < 8; i++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[i][b]);
		_putchar('\n');
	}
}
