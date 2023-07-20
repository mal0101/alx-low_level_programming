#include "main.h"
#include <stdio.h>
/**
 * main -prints the ints 1-100
 * for multiples of 3 prints fizz
 * for multiples of 5 prints buzz
 * for multiples of 15 (3&5) fizzbuzz
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz ");
		else if (i % 3 != 0 && i % 5 == 0)
			printf("Buzz ");
		else if (i % 15 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
