#include "holberton.h"

/**
* puts2 - prototipo
*
* @str : variable
*/

void puts2(char *str)
{
int a;
	for (a = 0 ; str[a] != '\0' ; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	a++;
	}
	_putchar('\n');
}
