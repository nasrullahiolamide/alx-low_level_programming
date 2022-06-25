#include "main.h"

/**
 * _islower - a function that checks for lowercase character.
 * @c: a character to be checked and returns either trueor false.
 * Return: 0 if false and 1 if true.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
