#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int a = 0;
	int b;

	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			if (a * b <= 9)
			{
				if (b != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(a * b + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((a * b) / 10 + '0');
				_putchar((a * b) % 10 + '0');
			}
			if (b != 9)
				_putchar(',');
			b++;
		}
		_putchar('\n');
		a++;
	}
}
