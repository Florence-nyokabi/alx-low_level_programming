#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: the number of times it returns.
 *
 * Return: the sum of all its parameters, otherwise if n == 0, return 0
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int counter, addition = 0;
	va_list vaList;

	va_start(vaList, n);

	for (counter = 0; counter < n; counter++)
		addition += va_arg(vaList, int);

	va_end(vaList);
	return (addition);
}
