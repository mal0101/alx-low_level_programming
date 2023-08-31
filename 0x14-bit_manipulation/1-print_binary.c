#include "main.h"
/**
 * print_binary - prints the binary equivalent of a decimal number
 * @a: number to print in binary
 */
void print_binary(unsigned long int a)
{
	int b, l7sab = 0;
	unsigned long int daba;

	for (b = 63; b >= 0; b--)
	{
		daba = a >> b;

		if (daba & 1)
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
