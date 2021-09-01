#include "search_algos.h"

/**
  * binary_search - searches for a value in a sorted array of integers
  * using the Binary search algorithm
  * @array:pointer to the first element of the array to search in
  * @size:  the number of elements in array
  * @value: the value to search for
  * Return: -1 or the index (i)
**/

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid = 0;

	if (array)
	{
		while (left <= right)
		{
			printf("Searching in array: ");
			for (mid = left; mid < right; mid++)
			{
				printf("%d, ", array[mid]);
			}
			printf("%d\n", array[mid]);
			mid = left + (right - left) / 2;
			if (array[mid] == value)
			{
				return (mid);
			}
			if (array[mid] < value)
				left = mid + 1;
			else
				right = mid - 1;
		}
	}
	return (-1);
}
