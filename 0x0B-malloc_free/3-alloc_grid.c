#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array
 * @height: height of the array
 * Return: Pointer or Null on failure/ width & height = negative.
 */
int **alloc_grid(int width, int height)
{
	int **arint;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);
	arint = malloc(sizeof(int *) * height);
	if (arint == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		arint[a] = malloc(sizeof(int) * width);
		if (arint[a] == NULL)
		{
			for (; a >= 0; a--)
				free(arint[a]);
			free(arint);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			arint[a][b] = 0;
	}
	return (arint);
}
