#include "main.h"
/**
 * set_bit - sets a bit at a specific index to 1
 * @a: pointer to the number to change
 * @indx: index of the said bit
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *a, unsigned int indx)
{
	if (indx > 63)
		return (-1);
	*a = ((1UL << indx) | *a);
	return (1);
}
