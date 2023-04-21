#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the counter
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	int i;

	for (i = 0; i < n; i++)
	{
		int sum = 0;

		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
