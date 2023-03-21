#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int i, j, r;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = i * 9;
			_putchar(r + '0');
			_putchar(',');
			_putchar(' ');
		}
	_putchar('\n');
	}
}
