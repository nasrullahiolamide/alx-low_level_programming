#include "main.h"

/**
 * times_table - print the n times table
 * Return: null
 */

void times_table(void)
{
	int r;
	int c;
	int num;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			num = r * c;
			if (num <= 9)
			{
				_putchar(' ');
				_putchar(num + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
