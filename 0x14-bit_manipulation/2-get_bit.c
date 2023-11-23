#include "main.h"
/**
* get_bit - returns the value of a bit at an index in a decimal num
* @n: number to search
* @index: index of bit
* Return: value of the bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bitvalue;

	if (index > 63)
		return (-1);
	bitvalue = (n >> index) & 1;
	return (bitvalue);
}
