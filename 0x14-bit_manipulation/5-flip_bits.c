#include "main.h"
/**
 * flip_bits - counts the number of bits to change
 * to get one num to another
 * @f: first number
 * @s: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int f, unsigned long int s)
{
	int i, l7sab = 0;
	unsigned long int daba;
	unsigned long int exclusive = f ^ s;

	for (i = 63; i >= 0; i--)
	{
		daba = exclusive >> i;
		if (daba & 1)
			l7sab++;
	}
	return (l7sab);
}
