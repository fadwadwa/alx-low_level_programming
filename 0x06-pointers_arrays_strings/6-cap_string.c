#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: a pointer to char
 *
 * Return: char
 */
char *cap_string(char *str)
{
	int i, j;
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
				'"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (str[i - 1] == sep[j - 1])
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] -= 32;
				}
			}
		}
	}
	return (str);
}
