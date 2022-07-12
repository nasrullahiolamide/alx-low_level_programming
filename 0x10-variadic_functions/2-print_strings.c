#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Print all strings provided as arguments
 *
 * @separator: Seperating character between each string
 * @n: number of strings to be printed
 * @...: all other parameters
 *
 * Return: null
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *string;

	va_start(ap, n);

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			string = va_arg(ap, char *);
			if (string == NULL)
			{
				printf("(nil)");
			}

			printf("%s", string);

			if (i != n && separator != NULL)
			{
				printf("%s", separator);
			}

		}
	}
	va_end(ap);
	printf("\n");
}
