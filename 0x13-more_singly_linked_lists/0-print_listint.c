#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_listint - prints all the elements of a given list
 * @h: a pointer to the header
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%u\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
