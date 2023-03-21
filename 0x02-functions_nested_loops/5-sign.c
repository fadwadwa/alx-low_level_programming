#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: an integer
 * Return: 1 , 0 , or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('0');
	}
	else
	{
		return (0);
		_putchar('-');
	}
}
