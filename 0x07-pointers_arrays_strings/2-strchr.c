#include "main.h"
/**
 * _strchr - locates a charater in a string
 * @s: the string
 * @c: the charater
 * Return: a pointer to 1st occurrence of X'ter c or Null
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	while (s[x] >= '\0')
	{
		if (s[x] == c)
		{
			return (&s[x]);
		}
		x++;
	}
	return ('\0');
}
