#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * and returns the head node's data
 * @head: double pointer to the head
 * Return: the integer n
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int n;

	if (*head != NULL)
		return;
	p = *head;
	n = p->n;
	*head = (*head)->next;
	free(p);
	return (n);
}
