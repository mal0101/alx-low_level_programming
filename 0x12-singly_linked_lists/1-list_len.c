#include <stdlib.h>
#include "lists.h"

/**
 * list_len- returns the number of elements in a linked list
 * @p: pointer to the list_t list
 * Return: number of elements in p
 */
size_t list_len(const list_t *p)
{
	size_t y = 0;

	while (p)
	{
		y++;
		p = p->next;
	}
	return (y);
}
