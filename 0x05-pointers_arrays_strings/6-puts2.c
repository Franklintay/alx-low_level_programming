#include "main.h"
/**
 * puts2 - prints every other character of a string, starting with 1st Xter.
 * @str: String
 * Return: every other charater of the string except the 1st.
 */
void puts2(char *str)
{
	int x = 0;
	int c = 0;
	char *b = str;
	int a;

	while (*b != '\0')
	{
		b++;
		x++;
	}
	c = x - 1;
	for (a = 0; a <= c; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}

