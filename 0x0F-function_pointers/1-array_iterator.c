#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function given as a parameter on element of array.
 * @array: an array
 * @size: number of elements
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
