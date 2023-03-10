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
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
