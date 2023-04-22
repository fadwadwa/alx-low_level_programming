#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the fct
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, n;
	char c, *s;

	for (i = 0; format[i] != '\0'; i++)
	{
		switch (format[i])
		{
			case 'c':
			{
				c = (char) va_arg(args, int);
				printf("%c", c);
				break;
			}
			case 'i':
			{
				n = va_arg(args, int);
				printf("%d", n);
				break;
			}
			case 'f':
			{
				double d = va_arg(args, double);

				printf("%f", d);
				break;
			}
			case 's':
			{
				s = va_arg(args, char*);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
			}
			default:
			{
				break;
			}
		}
	}
	va_end(args);
}

