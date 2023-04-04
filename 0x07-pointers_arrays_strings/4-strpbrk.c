#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: pointer to char
 * @accept: pointer to char
 *
 * Return: a pointer to the byte in s or null
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
		for (p = accept; *p != '\0'; p++)
		{
			if (*s == *p)
				return (s);
		}
		s++;
	}
	return (NULL);
}
