#include "lists.h"
#include <stddef.h>
/**
 * list_len - returns the number of elements in a linked list
 * @h: a pointer to the head
 * Return: num of elements
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *p = h;

	while (p != NULL)
	{
		n++;
		p = p->next;
	}
	return (n);
}
