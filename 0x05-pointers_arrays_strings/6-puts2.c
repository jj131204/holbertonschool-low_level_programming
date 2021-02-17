#include "holberton.h"
#include <stdio.h>
/**
* puts2 - prototipo
*
* @str : variable
*/

void puts2(char *str)
{
int a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');
}
