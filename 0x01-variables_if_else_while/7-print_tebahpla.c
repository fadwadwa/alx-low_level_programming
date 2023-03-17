#include <stdio.h>
/**
 * main - the main function
 * Return: 0
 */
int main(void)
{	char c;
	for (c = 'z' ; c >= 'a' ; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
