#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(i * '9');
		_putchar(',');
		_putchar(' ');
		i++;
	}
}
