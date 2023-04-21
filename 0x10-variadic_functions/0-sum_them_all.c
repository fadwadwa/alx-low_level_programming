#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the counter
 * @...: var num of param
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	unsigned int i, sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
