#include "main.h"

/**
 * putsx2 - print every other character of a string
 * @str: string to read
 * Return : null
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
