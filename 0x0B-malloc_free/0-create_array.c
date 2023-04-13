#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - creates an array of chars and initializes it
 * @size: unsigned int
 * @c: char
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
		return (NULL);
	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
