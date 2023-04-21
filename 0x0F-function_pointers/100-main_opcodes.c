#include <stdio.h>
#include <stdlib.h>
/**
 * main - main fct
 * @argc: arguments counter
 * @argv: arguments vector
 * Return: the opcodes
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	int i, num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	unsigned char *main_ptr = (unsigned char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", *(main_ptr + i));
	}
	printf("\n");
	return (0);
}
