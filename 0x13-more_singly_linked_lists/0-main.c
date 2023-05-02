#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 * 
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head = NULL;
	listint_t *new;
	size_t n;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}
	n = print_listint(head);
	printf("-> %lu elements\n", n);
	free(new);
	return (0);
}
