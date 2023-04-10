#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: a character
 * @needle: a character
 *
 * Return: a pointer to char or null
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;
	}
	return (NULL);
}
