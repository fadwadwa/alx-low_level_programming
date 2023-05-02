#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: double pointer to the head
 * @n: an integer
 * Return: the address of the new element or null if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (head == NULL)
		return (NULL);
	if (*head == NULL)
		*head = new;
	else
	{
		listint_t *p = *head;

		while (p->next != NULL)
			p = p->next;
		p->next = new;
	}
	return (new);
}
