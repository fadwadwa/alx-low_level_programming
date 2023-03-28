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
	int num = 0;
	int started = 0;

	while (*s != '\0')
	{
		if (*s == '-')
			sign = -1;
		else if (*s == '+')
			sign = 1;
		else if (*s >= '0' && *s <= '9')
		{
			started = 1;
			num = num * 10 + (*s - '0');
		}
		else if (started)
			break;
		s++;
	}
	return (sign * num);
}
