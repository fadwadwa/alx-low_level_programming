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
	char *str;

	str = malloc(size * sizeof(char));
	str[0] = c;
	if (str == 0)
		return (NULL);
	return (str);
}
