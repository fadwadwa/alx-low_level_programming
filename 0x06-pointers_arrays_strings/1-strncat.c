#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first pointer to character
 * @src: second pointer to character
 * @n: an integer
 *
 * Return: a character
 */
char *_strncat(char *dest, char *src, int n)
{
	char *pt = dest;
	int i = 0;

	while (*pt != '\0')
		pt++;
	while (i < n && *src != '\0')
	{
		*pt++ = *src++;
		i++;
	}
	*pt = '\0';
	return (dest);
}
