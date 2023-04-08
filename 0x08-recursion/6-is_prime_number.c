#include "main.h"

int _prime_test(int n, int i);

/**
 * is_prime_number - checks a number if it is a mrime num or no
 * @n: the number to be checked
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (_prime_test(n, 2));
}

/**
 * _prime_test - tests if the number is prime
 * @n: the number to be tested
 * @i: divisor
 * Return: one or 0
 */
int _prime_test(int n, int i)
{
	if (n % i == 0)
	{
		if (i == n)
			return (1);
		else /* i!= n*/
			return (0);
	}
	else /* n % i != 0 */
		return (_prime_test(n, i + 1));
}
