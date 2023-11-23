#include "main.h"
/**
* binary_to_uint - converts a binary number to unsigned int
* @b: string w binary number
* Return: converted number
*/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimalvalue = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimalvalue = 2 * decimalvalue + (b[i] - '0');
	}
	return (decimalvalue);
}
