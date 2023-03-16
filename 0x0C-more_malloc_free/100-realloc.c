#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously
 * @old_size: size of the oldmemory allocation
 * @new_size: size of the new memory allocation.
 * Return: a pointer orNull.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	unsigned int b, c = new_size;
	char *z = ptr;

	if (ptr == NULL)
	{
		a = malloc(new_size);
		return (a);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	a = malloc(new_size);
	if (a == NULL)
		return (NULL);
	if (new_size > old_size)
		c = old_size;
	for (b = 0; b < c; b++)
		a[b] = z[b];
			free(ptr);
	return (a);
}
