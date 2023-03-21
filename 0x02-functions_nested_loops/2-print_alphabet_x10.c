#include "main.h"
/**
 * print_alphabet_x10 - Prints ten times the alphabet in lowercase
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i, j = 0;

	while (j <= 10)
	{
		for (i = 97 ; i <= 123 ; i++)
			_putchar(i);
		j++;
	}
	_putchar('\n');
}
