#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * not allowed to use arrays, nor malloc, nor % and /
 * @n: the unsigned long number
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	if (n == 0 || n == 1)
	{
		_putchar(n + '0');
		return;
	}
	if (n > 1)
	{
		print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
}
