#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: pointer to character
 * @s2: pointer to character
 * Return: null on failure and a pointer on success
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	int len1, len2;

	len1 = strlen(s1);
	len2 = strlen(s2);
	char *result;

	result = (char *) malloc(len1 + len2 + 1);
	if (result == NULL)
		return (NULL);
	memcpy(result, s1, len1);
	memcpy(result + len1, s2, len2 + 1);
	return (result);
}
