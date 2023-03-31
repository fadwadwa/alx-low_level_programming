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
	char *l = "4433007711";
	char *n = "aAeEoOtTlL";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0, j < 10; j++)
		{
			if (str[i] == n[j])
				str[i] = l[i];
		}
	}
	return (str);
}
