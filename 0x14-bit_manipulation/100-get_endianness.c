#include "main.h"
/**
* get_endianness - checks if a machine is little or big endian
* Return: 0 for big, 1 for small
*/
int get_endianness(void)
{
	unsigned int z = 1;
	char *s = (char *) &z;

	return (*s);
}
