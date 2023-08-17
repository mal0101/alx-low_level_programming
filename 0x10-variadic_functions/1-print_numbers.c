#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers -prints numbers, followed by a new line
 * @separator: the str printed between numbers
 * @n: the number of ints passed to the fct
 * @...: a variable number of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list listanums;
	unsigned int index;

	va_start(listanums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(listanums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(listanums);
}
