#include "main.h"
/**
 * swap_int -swaps the value of two ints
 * @i: int
 * @j: int
 */
void swap_int(int *i, int *j)
{
	int m;

	m = *i;
	*i = *j;
	*j = m;
}
