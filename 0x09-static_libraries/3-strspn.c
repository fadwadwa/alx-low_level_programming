#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: char
 * @accept: char
 *
 * Return: an unsigned integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (!accept[j])
			break;
	}
	return (len);
}
