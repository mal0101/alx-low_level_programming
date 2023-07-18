#include "main.h"
/**
 * _islower -Checks for lowercase alphabet
 * @c: Character to check
 * Return: if character is lowercase 0; otherwise 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
