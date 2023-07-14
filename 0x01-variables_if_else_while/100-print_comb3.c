#include <stdio.h>
/**
 * main -Entry point
 * prints all possible numbers with 2 digits
 * Return: Always 0
 */
int main(void)
{
	int i;
	int y;

	for (i = 0; i <= 8; i++)
	{
		for (y = i + 1; y <= 9; y++)
	{
		putchar('0' + i);
		putchar('0' + y);
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
