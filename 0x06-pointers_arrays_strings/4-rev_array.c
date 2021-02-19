#include "holberton.h"

/**
 * reverse_array - funcion
 * @a: Pointer to integrers.
 * @n: Number of elements of the array.
 *
 */

void reverse_array(int *a, int n)
{
int b, c, d;

	n = n - 1;
	for (b = 0; b <= n; b++)
	{
		c = a[b];
		d = a[n];

		a[b] = d;
		a[n] = c;
		n--;
	}
}
