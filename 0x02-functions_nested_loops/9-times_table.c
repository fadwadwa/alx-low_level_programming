#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int i, r;

	for (i = 0; i <= 9; i++)
	{
		r = i * 9;
		_putchar(r + '0');
		_putchar(',');
		_putchar(' ');
	}
}
