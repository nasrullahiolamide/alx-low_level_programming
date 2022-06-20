#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to memory area to fill
 * @b: byte to fill memory area with
 * @n: number of bytes to fill
 * Return: Character
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
