#include "lists.h"
/**
 * sum_listint - sums of all the data of a linked list
 * @head: pointer of the head
 * Return: sum of n
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
