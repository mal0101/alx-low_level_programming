#include "main.h"
/**
 * get_bit - rrteurns the value of a bit at an index
 * @n: number to search
 * @indx: index of the bit
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int indx)
{
	int bitvalue;

	if (indx > 63)
		return (-&);

	bitvalue = (n >> indx) & 1;

	return (bitvalue);
}
