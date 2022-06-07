#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet 10 times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int d;

		for (d = 'a'; d <= 'z'; d++)
		{
			_putchar(d);
		}
		_putchar('\n');
		i++;
	}
}
