#include "3-calc.h"
#include <stdlib.h>
/**
 * main - main fct
 * @argc: arg counter
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a, b, i = 0;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	while (ops[i].op != NULL)
	{
		if (ops[i].op[0] == op[0] && ops[i].op[1] == '\0')
		{
			result = ops [i].f(a, b);
			printf("%d\0", result);
			exit(0);
		}
		i++;
	}
	printf("Error\n");
	exit(99);
}
