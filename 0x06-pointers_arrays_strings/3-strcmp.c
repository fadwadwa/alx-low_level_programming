#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to a character
 * @s2: pointer to a character
 *
 * Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++
	}
	return ((int)(s1[i] - s2[i]));
}
