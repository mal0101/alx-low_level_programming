#include "main.h"
/**
* print_binary - prints the binary equivalent of a decimal
* @n: number to print in binary
*/
void print_binary(unsigned long int n)
{
	int i, l7sab = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			l7sab++;
		}
		else if (l7sab)
			_putchar('0');
	}
	if (!l7sab)
		_putchar('0');
}
