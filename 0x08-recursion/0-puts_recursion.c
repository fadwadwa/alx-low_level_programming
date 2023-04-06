#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line
 * using recursion
 * @s: a pointer to the first character of a string
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1); /*recursive call with next character*/
}
