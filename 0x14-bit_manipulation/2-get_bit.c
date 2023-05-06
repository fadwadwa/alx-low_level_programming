#include "main.h"
#include <stdio.h>
/**
 * get_bit - gets the bit of a given index
 * @n: the number
 * @index: the given index
 * Return: the bit at index or -1 if it shows an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
		return (-1);
	((n >> index) & 1) ? return (1) : return (0);
}
