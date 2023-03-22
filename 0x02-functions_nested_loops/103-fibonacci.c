#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int a, b, c, sum;

	a = 0;
	b = 1;
	c = 0;
	sum = 0;
	while (c < 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
			sum += c;
	}
	printf("%i\n", sum);
	return (0);
}
