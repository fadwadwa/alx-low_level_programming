#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: a pointer of char
 *
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
