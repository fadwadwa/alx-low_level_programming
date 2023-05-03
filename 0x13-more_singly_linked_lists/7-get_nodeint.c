#include "lists.h"
/**
 * get_nodeint_at_index - gets the nth node of a linked list
 * @head: pointer to the head
 * @index: the index of the nth node
 * Return: the address of the nth node
 * or null if it doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (index != count)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		count++;
	}
	return (head);
}
