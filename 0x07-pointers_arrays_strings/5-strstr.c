#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring.
 * @haystack: entry string
 * @needle: substring
 * Return: haystack or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *y = needle;

		while (*x == *y && *y != '\0')
		{
			x++;
			y++;
		}

		if (*y == '\0')
			return (haystack);
	}

	return (NULL);
}
