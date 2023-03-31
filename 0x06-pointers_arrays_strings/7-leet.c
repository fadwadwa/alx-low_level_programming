#include "main.h"

/**
 * leet - encodes a string
 * @str: pointer to char
 *
 * Return: char
 */
char *leet(char *str)
{
	int i, j;
	char *n = "4433007711";
	char *l = "aAeEoOtTlL";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0, j < 10; j++)
		{
			if (str[i] == l[j])
				str[i] = n[j];
		}
	}
	return (str);
}
