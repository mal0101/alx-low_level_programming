#include "main.h"
/**
 * times_table -Check description
 * Description: it prints 9 times table starting with 0
 * Return: Nothing
 */
void times_table(void)
{
	int i, j, x;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			x = i * j;

			if ((x / 10) == 0)
			{
				if (j != 0)
					_putchar(' ');
				_putchar(x + '0');

				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
