#include "lists.h"
/**
 * listint_len - returns the number of nodes in a singly linked list
 * @head: pointer to said linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *head)
{
	size_t number = 0;

	while (head)
	{
		number++;
		head = head->next;
	}
	return (number);
}
