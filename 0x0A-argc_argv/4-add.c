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
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		char *num = argv[i];

		for (j = 0; num[j] != '\0'; j++)
		{
			if (isdigit(num[j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(num);
	}
	printf("%d\n", sum);
	return (0);
}
