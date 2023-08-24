#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of the linked list
 * @head: double pointer to list_t list
 * @string: new string to add in the node
 * Return: the address pf the new element, or NULL if fail
 */
list_t *add_node(list_t **head, const char *string)
{
	list_t *new;
	unsigned int l7sab = 0;

	while (string[l7sab])
		l7sab++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->string = strdup(string);
	new->l7sab = l7sab;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
