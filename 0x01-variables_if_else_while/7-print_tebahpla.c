#include <stdio.h>
/**
 * main -Entry point
 * prints alphabet reverso
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}