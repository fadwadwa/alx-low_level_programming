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
	int haystack_len = 0;
	int needle_len = 0;
	char *p1 = haystack;
	char *p2 = needle;

	while (*p1 != '\0')
	{
		haystack_len++;
		p1++;
	}
	while (*p2 != '\0')
	{
		needle_len++;
		p2++;
	}
	if (needle_len > haystack_len)
		return (NULL);
	p1 = haystack;
	while (*p1 != '\0')
	{
		char *p3 = p1;
		char *p4 = needle;

		while (*p3 == *p4 && *p4 != '\0')
		{
			p3++;
			p4++;
		}
		if (*p4 == '\0')
			return (p1);
		p1++;
	}
	return (NULL)
}
