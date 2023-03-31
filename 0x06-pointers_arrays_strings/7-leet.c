#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: pointer to char
 *
 * Return: char
 */
char *leet(char *str)
{
	int i, j;
	char *l = "433710";
	char *n = "aAeEoOtTlL";

	for (i = 0; n[i] != 0; i++)
	{
		for (j = 0, str[j] != '\0'; j++)
		{
			if (str[j] == n[i])
				str[j] = l[i / 2];
		}
	}
	return (str);
}
