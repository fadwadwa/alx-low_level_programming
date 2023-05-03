#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at a given
 * index of a linked list
 * @head: double pointer to the head
 * @index: the index
 * Return: 1 if it succeeded and -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *tmp;
	unsigned int count = 1;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	prev = *head;
	while ((index - 1) != count)
	{
		prev = prev->next;
		if (prev == NULL)
			return (-1);
		count++;
	}
	tmp = prev->next;
	prev->next = tmp->next;
	free(tmp);
	return (1);
}
