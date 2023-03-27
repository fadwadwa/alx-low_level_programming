#include "main.h"

/**
 * rev_string - reverses a string
 * @s: a pointer
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int i, j = 0, len = 0;
	char tmp;

	while (s[j] != '\0')
	{
		len++;
		j++;
	}
	for (i = 0; i < (len / 2); i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
