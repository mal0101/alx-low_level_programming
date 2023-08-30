#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - counts the number of unique nodes
 * in a looped listint_t linked list
 * @head: pointer to first node
 * Return: if list not looped - 0
 * else - the number of nodes in the list
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *lista, *listat;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	lista = head->next;
	listat = (head->next)->next;

	while (listat)
	{
		if (lista == listat)
		{
			lista = head;
			while (lista != listat)
			{
				nodes++;
				lista = lista->next;
				listat = listat->next;
			}
			lista = lista->next;
			while (lista != listat)
			{
				nodes++;
				lista = lista = ->next;
			}
			return (nodes);
		}
		lista = lista->next;
		listat = (listat->next)->next;
	}
	return (0); //unfinished
