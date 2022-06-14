#include "main.h"

/**
 * _puts - Prints out a string into std output
 * @str: string to read
 * Return : null
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
