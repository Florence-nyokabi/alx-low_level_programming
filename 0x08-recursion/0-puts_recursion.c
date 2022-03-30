#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string
 *
 * Return: On success 1.
 * On error, -1.
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_put_recursion (s+1);
}
