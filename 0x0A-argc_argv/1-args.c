#include <stdio.h>
#include "main.h"
/**
 * main- prints the number of args passed to the prog
 * @argc: number of args
 * @argv: array of args
 * Return: Always 0
 */
int main(inr argc, char *argv[])
{
	(void) argv;
		printf("%d\n", argc - 1);

		return (0);
}
