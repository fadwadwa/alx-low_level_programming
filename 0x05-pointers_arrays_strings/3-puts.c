#include "main.h"
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
		_putchar(*str);
		str++;
	}
	return (0);
}
