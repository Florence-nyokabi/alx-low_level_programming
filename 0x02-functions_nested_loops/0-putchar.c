#include "main.h"

/**
* main - a program that prints _putchar
*
* Return : always zero
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
