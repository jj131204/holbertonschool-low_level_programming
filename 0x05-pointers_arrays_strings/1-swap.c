#include "holberton.h"

/**
*swap_int - prototipo
*
*@a : variable1
*@b : variable2
*/

void swap_int(int *a, int *b)
{
int c = *a;

*a = *b;
*b = c;
}
