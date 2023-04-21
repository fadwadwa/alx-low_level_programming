#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the counter
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	va_list args;

	va_start(args, n);
	int i;

	for (i = 0; i < n; i++)
	{
		int x, sum = 0;

		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	return (sum);
}
