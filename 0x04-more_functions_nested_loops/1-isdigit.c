#include "main.h"
/**
 * _isdigit -check if numbers are 0-9
 * @i: char to check
 * Return: 0 ou 1
 */
int _isdigit(int i)
{
	if (i >= '0' && i <= '9')
		return (1);
	else
		return (0);
}
