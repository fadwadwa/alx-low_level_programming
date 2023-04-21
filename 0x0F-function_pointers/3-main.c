#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * main - main fct
 * @argc: arg counter
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a, b, result;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = get_op_func(argv[2]);
	if (op != NULL)
	{
		result = ops(a, b);
		printf("%d\n", result);
		exit(0);
	}
	printf("Error\n");
	exit(99);
}
