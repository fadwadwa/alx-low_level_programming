#include "main.h"
/**
 * flip_bits - flips the bits to get from a number to another
 * @n: first num
 * @m: second num
 * Return: the number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a, count = 0;

	a = (n ^ m);
	while (a != 0)
	{
		count += (a & 1);
		a >>= 1;
	}
	return (count);
}
