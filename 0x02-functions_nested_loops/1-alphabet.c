#include "main.h"

/**
 * print_alphabet - Print all alphabets in small letter
 * Return:  void
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
