#include "lists.h"
/**
 * add_node_end - adds a new node at the end of the list
 * @head: double pointer to the head
 * @str: string
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		list_t *p = *head;

		while (p->next != NULL)
			p = p->next;
		p->next = new;
	}
	return (new);
}
