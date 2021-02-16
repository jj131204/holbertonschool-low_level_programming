#include "holberton.h"

int _strlen(char *s)
{
int longitud = 0;
	while(*s != '\0')
	{
		longitud++;
		s = s + 1;
	}
	return(longitud);

}
