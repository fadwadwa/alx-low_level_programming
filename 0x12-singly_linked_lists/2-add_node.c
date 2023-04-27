#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list
 * @head: double pointer to the head of the list
 * @str: a string
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));/*allocate memo for new node*/
	char *str_copy = strdup(str);/* duplicate the string*/
	int i;

	if (new == NULL)/*failed allocation*/
		return (NULL);
	for (i = 0; str_copy[i] != '\0'; i++)
		;
	new->str = str_copy;/*assign the dup string to the new node*/
	new->len = i;
	new->next = *head;/* make the new node the head */
	*head = new;/*update the head*/
	return (new);
}
