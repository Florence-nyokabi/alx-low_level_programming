#include "main.h"

/**
 * get-bits - returns the value of a bit at a given index.
 * @n: integer
 * @index: index
 * Return: integer
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);

	if ((n & max))
		return (1);
	else
		return (0)
}
