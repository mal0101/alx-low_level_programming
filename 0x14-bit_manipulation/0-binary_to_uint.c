#include "main.h"
/**
* binary_to_uint - converts a binary number to unsigned int
* @b: str containing the binary number
* Return: converted number
*/
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int decimval = 0;

	if (!b)
		return (0);
	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		decimval = 2 * decimval + (b[x] - '0');
	}
	return (decimval);
}
