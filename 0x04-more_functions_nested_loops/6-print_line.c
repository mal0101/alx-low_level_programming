#include "main.h"
/**
 * print_line -draws a straight line in term
 * @n: number of times _ should be printed
 * Return: none
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
