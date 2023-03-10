#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: the initial string
 * @src: the additional string
 * @n: number of bytes
 * Return: the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
