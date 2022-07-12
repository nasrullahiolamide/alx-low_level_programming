#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sum an infinty number of argument
 * @n: number of expected arguemnts
 * @...: numbers to sum
 * Return: sum of numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 1; i <= n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);

	return (sum);
}
