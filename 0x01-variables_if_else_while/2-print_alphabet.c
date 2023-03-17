#include <stdio.h>
/**
 * main - the main function
 * Return: 0
 */
int main(void)
{	int i;
	char t[] = "abcdefghijklmnopqrstuvwxyz";
	for (i = 0; i < 26 ; i++)
		putchar(t[i]);
	return (0);
}
