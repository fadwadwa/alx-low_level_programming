#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: a pointer
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int k = 0, len = 0, n, i;

	while (str[k] != '\0')
	{
		len++;
		k++;
	}
	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
		for (i = len - n; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else
	{
		n = len / 2;
		for (i = n; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
}

