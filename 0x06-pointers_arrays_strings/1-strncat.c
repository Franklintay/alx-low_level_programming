#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: the initial string
 * @src: the additional string
 * @n: number of charaters to be added to the initial string.
 * Return: the resulting string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; y <= n - 1; y++)
	{
		dest[x] = src[y];
		x++;
	}
	return (dest);
}
