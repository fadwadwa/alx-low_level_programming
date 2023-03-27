#include "main.h"

/**
 * puts2 - prints characters of a string
 * @str: a pointer
 *
 *Return: 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n');
}
