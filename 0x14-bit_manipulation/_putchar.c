#include "main.h"
/**
* _putchar - writes the character to the stdout
* @c: char to print
* Return: 1 when succesful
* -1 when failed
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
