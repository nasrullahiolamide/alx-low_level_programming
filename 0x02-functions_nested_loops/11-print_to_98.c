#include "main.h"

/**
 * print_to_98 - print numbers from n to 98
 * @n : number to check
 * Return: null
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		print_to_98(n + 1);
	}
	else if (n == 98)
	{
		_putchar(n + '0');
	}
}
