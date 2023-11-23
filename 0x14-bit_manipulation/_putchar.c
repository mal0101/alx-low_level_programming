#include "main.h"
/**
* _putchar - writes the char c to stdout
* @c: the char
* Return: on success 1
* on error -1
* and errno is set approproately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
