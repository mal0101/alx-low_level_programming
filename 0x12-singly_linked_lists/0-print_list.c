#include <stdio.h>
#include "lists.h"

/**
 * print_list- prints all elements in a linked list
 * @x: pointer to the list_t list to print
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *x)
{
	size_t i = 0;

	while (x)
	{
		if (!x->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", x->len, x->str);
		x = x->next;
		i++;
	}
	return (i);
}
