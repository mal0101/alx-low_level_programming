#include <stdio.h>
/**
 * main -Entry point
 * check readme
 * Return: Always 0
 */
int main(void)
{
	int i;
	int x;

	for (i = 0; i <= 99; i++)
	{
		for (x = i; x <= 99; x++)
		{
			int d11 = i / 10;
			int d12 = i % 10;
			int d21 = x / 10;
			int d22 = x % 10;

			putchar(d11 + '0');
			putchar(d12 + '0');
			putchar(',');
			putchar(d21 + '0');
			putchar(d22 + '0');

			if (i != 98 || x != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
