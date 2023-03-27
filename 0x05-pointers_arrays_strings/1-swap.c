#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: pointer
 * @b: pointer
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int *p;

	p = a;
	a = b;
	b = p;
}
