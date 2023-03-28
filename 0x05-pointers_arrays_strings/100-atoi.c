#include "main.h"

/**
 * _atoi - coverts a string to an integer
 * @s: a pointer
 *
 * Return: an integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	/*skip white space*/
	while (s[i] == ' ')
		i++;
	/* handle sign*/
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
		i++;
	/* process digits*/
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (sign * result);
}
