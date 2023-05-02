#include "lists.h"
/**
 * free_listint2 - frees a list and sets the head to null
 * @head: double pointer to head
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *p = *head, *next;

	while (p != NULL)
	{
		next = p->next;
		free(p);
		p = next;
	}
	*head = NULL;
}
