#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *separate = "";

	va_list x;

	va_start(x, format);

	if  (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separate, va_arg(x, int));
					break;
				case 'i':
					printf("%s%d", separate, va_arg(x, int));
					break;
				case 'f':
					printf("%s%f", separate, va_arg(x, double));
					break;
				case 's':
				       s = va_arg(x, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", separate, s);
					break;
				default:
					i++;
					continue;
			}
			separate = ",";
			i++;
		}
	}

	printf("\n");
	va_end(x);
}
