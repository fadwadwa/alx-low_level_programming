#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: an integer
 *
 * Return: the result
 */
int _sqrt_recursion(int n)
{
	int root;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	root = _sqrt_recursion(n / 2);
	if ((root + 1) * (root + 1) <= n)
		return (root + 1);
	else
		return (root);
}
