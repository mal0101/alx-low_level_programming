#include <stdio.h>
/**
 * main -Entry point
 * check readme
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;
	int e;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (e = j + 1; e <= 9; e++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(e + '0');
				if (i != 7 || j != 8 || e != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
