#include "main.h"
/**
* flip_bits - counts the number of bits to change
* to get from one number to another
* @n: first num
* @m: second num
* Return: number of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, l7sab = 0;
	unsigned long int daba;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		daba = exclusive >> a;
		if (daba & 1)
			l7sab++;
	}
	return (l7sab);
}
