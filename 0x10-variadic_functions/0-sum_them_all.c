#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all -Returns the sum of all its args
 * @n: the number of args passed to the function
 * @...: a variable number of args to calculate its sum
 * Return: if n == 0 - 0
 * Else- the sum of all args
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valista;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(valista, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valista, int);

	va_end(valista);
	return (sum);
}
