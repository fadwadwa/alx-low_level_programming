#include <stdio.h>
/**
 * main - the main function
 * Return: 0
 */
int main(void)
{	int i;
	char t[100] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\0\n";

	for (i = 0; i < 52 ; i++)
	putchar(t[i]);
	return (0);
}
