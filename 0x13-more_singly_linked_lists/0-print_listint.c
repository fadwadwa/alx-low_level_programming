#include "lists.h"

/**
 * print_listint - prints all the elements of a given list
 * @h: a pointer to the header
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *p;
	size_t count = 0;

	p = h;
	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;
		count++;
	}
	return (count);
}
