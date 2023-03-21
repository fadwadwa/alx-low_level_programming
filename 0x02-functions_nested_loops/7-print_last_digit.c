#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @i: the input value of an integer
 * Return: the last digit
 */
int print_last_digit(int i)
{
	int last_d;

	last_d = i % 10;
	if (last_d < 0)
	{
		_putchar(-last_d + '0');
		return (-last_d);
	}
	else
	{
		_putchar(last_d + '0');
		return (l);
	}
}
