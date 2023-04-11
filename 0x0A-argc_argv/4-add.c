#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - main fct
 * @argc: arg counter
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, j,sum = 0;

	if (argc < 3)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i] != 0; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
