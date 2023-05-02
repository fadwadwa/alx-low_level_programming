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
	const listint_t *p = h;
	size_t count = 0;

	while (p != NULL)
	{
		printf("%u\n", p->n);
		p = p->next;
		count++;
	}
	return (count);
}
