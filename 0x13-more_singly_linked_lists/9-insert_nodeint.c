#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head
 * @idx: the index
 * @n: data
 * Return: the address of the new node or null if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *p;
	unsigned int count = 1;

	if (head != NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	p = *head;
	while (idx != count)
	{
		p = p->next;
		if (p == NULL)
			return (NULL);
		count++;
	}
	new->next = p->next;
	p->next = new;
	return (new);
}
