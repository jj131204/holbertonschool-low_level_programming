#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */

int **alloc_grid(int width, int height)
{
int **ar;
int i, j;
	if (width <= 0 || height <= 0)
	{
		return (0);
	}
	ar = malloc(sizeof(int) * height);

	/*for (i = 0; i < height; i++)
	{
		ar[i] = malloc(sizeof(int) * width);
	}*/
	if (ar == 0)
		return (0);

	for (i = 0; i < height; i++)
	{
		ar[i] = (int *) malloc(sizeof(int) * width);
		if (ar[i] == NULL)
		{
			free(ar);
			for (j = 0; j <= i; j++)
				free(ar[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);
}
