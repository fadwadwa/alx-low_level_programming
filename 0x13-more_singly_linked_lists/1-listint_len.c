#include "lists.h"
#include <stddef.h>
/**
 * listint_len - returns the number of elements in a linked list
 * @h: a pointer to the header
 * Return: num of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;
	const listint_t *p = h;

	while (p != NULL)
	{
		n++;
		p = p->next;
	}
	return (n);
}
