#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: a pointer to integers
 * @n: an integer
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, p;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		p = a[i];
		a[i] = a[j];
		a[j] = p;
	}
}
