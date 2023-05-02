#include "lists.h"
/**
 * free_listint - frees a list
 * @head: pointer to the head
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *p = head, *next;

	while (p != NULL)
	{
		next = p->next;
		free(p);
		p = next;
	}
}
