#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * _strdup - duplicates a given string
 * @str: string to be duplicated
 * Return: a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int len;
	char *copy;

	if (str == NULL)
		return (NULL);
	len = strlen(str) + 1;
	copy = (char *) malloc(len);
	if (copy == NULL)
		return (NULL);
	memcpy(copy, str, len);
	return (copy);
}
