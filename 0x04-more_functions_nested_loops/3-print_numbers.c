#include "main.h"
/**
 * print_numbers -prints ints from 0-9
 * Return: none
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
