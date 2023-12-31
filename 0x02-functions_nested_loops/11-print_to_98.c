#include <stdio.h>
#include "main.h"
/**
 * print_to_98 -prints all natural ints from n to 98
 * @n: starting point
 * Return: Nothing
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 97; n++)
			printf("%d, ", n);
	}
	else
		for (n = n; n > 98; n--)
			printf("%d, ", n);
	printf("98\n");
}
