#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to memory area to copy to
 * @src: pointer to memory area to copy from
 * @n: number of bytes to copy
 * Return: Character
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
