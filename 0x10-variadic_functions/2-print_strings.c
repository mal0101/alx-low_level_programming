#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings -prints strs, followed by new line
 * @separator: the str printed between strs
 * @n : the number of strs passed to the fct
 * @...: a variable number of strs to be printed
 * Small description:
 * if separator is NULL, it is not printed
 * if one of the strings is NULL, (nil) is printed instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	char *str;
	unsigned int index;

	va_start(strs, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strs, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strs);
}
