#include "lists.h"
/**
 * print_listint - prints all elements of a singly linked list
 * @head: pointer of said linked list
 * Return: number of nodes in the linked list
 */
size_t print_listint(const listint_t *head)
{
	size_t number = 0;

	while (head)
	{
		printf("%d\n", head->n);
		number++;
		head = head->next;
	}
	return (number);
}
