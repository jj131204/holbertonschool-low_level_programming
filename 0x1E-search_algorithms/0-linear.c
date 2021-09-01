#include "search_algos.h"

/**
  * linear_search - function that searches for a value in an array
  * @array:pointer to the first element of the array to search in
  * @size:  the number of elements in array
  * @value: the value to search for
  * Return: -1 or the index (i)
**/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i <= size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
