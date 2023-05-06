#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the address of the number
 * @index: the given index
 * Return: 1 if it worked, -1 if id didnt
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
		return (-1);
	*n = (*n | (1 << index));
	return (1);
}
