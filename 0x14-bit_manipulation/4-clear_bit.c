#include "main.h"
/**
 * clear_bit - sets the value of a given bit to 0
 * @p: pointer to the number to change
 * @indx: index of said bit
 * Return: 1 success, -1 failure
 */
int clear_bit(unsigned long int *p, unsigned int indx)
{
	if (indx > 63)
		return (-1);
	*p = (~(1UL << indx) & *p);
	return (1);
}
