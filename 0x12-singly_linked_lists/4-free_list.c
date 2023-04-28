#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list
 * @head: pointer the the head
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *p = head;

	while (p != NULL)
	{
		list_t *next = p->next;

		free(p->str);
		free(p);
		p = next;
	}
}
