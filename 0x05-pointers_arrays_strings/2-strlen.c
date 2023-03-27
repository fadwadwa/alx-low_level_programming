#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: a pointer to a char
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int i = 0, leng = 0;

	while (*(s + i) != 0)
	{
		leng++;
		i++;
	}
	_putchar(leng + '0');
}
