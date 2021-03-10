#include "function_pointers.h"
/**
 * array_iterator - print array in Hexadecimal and Integer
 * @array: collection of elements of the type same
 * @size: size of the array
 * @action: name function pointer
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
	if (!array || !action || !size)
		return;

	for (i = 0; size[i] != '\0'; i++)
	{
		action(array[i];)
	}

}
