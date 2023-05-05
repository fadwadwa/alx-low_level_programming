#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binary number to
 * an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i, len = 0;

	if (b == NULL)
		return (0);
	while (b[len])
		len++;
	for (i = 0; i <= len - 1; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			num = num + (1 << (len - 1 - i));
	}
	return (num);
}
