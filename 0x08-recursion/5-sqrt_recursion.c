#include "main.h"

int __sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: an integer
 *
 * Return: the result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (__sqrt(n, 0));
}

/**
 *
 *
 *
 *
 */
int __sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (__sqrt(n, i + 1));
}
