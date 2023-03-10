#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: a string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}

	return (lenght);
}
