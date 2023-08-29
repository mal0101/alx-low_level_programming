#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at specific index in a linked list
 * @head: pointer to first node
 * @index: index of the node to be returned
 * Return: pointer to node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *temp = head;

	while (temp && x < index)
	{
		temp = temp->next;
		x++;
	}
	return (temp ? temp : NULL);
}
