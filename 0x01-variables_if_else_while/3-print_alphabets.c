#include <stdio.h>
/**
 * main - the main function
 * Return: 0
 */
int main(void)
{	int i;
	char t[100] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n";

	for (i = 0; i < 53 ; i++)
	putchar(t[i]);
	return (0);
}
