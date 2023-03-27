#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse
 * @s: a pointer of char
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int i, len = _strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		putchar(*(s + i));
	}
	putchar('\n');
}
