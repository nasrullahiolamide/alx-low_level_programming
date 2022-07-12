#include <stdarg.h> 
#include "variadic_functions.h"

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