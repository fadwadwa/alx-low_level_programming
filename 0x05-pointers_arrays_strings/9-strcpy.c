#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to
 * @dest: a pointer
 * @src: a pointer
 *
 * Return: a char type
 */

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
		*p++ = *src++;
	*p = '\0';
	return (dest);
}
