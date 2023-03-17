#include <stdio.h>
/**
 * main - the main function
 * Return: 0
 */
int main(void)
{	int i;
	char t[] = "abcdefghijklmnopqrstuvwxyz\n";

	for (i = 0; i < 27 ; ++i)
		putchar(t[i]);
	return (0);
}
