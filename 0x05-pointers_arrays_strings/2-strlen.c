#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be measured
 * Return: length of string which is an integer
 **/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
