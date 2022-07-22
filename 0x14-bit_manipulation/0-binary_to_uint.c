#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int.
 *
 * @b: binary to convert
 * Return: Unsigned int if successful and 0 if failed
 */

unsigned int binary_to_uint (const char *b)
{
	unsigned int num = 0;   /* number to return */
	unsigned int pv = 1;    /* place value */
	int count;
	unsigned int len = _strlen(b); /* length of the binary char */

	for (count = len - 1; count >= 0; count--)
	{
		if (b[count] != '1' && b[count] != '0')
			return (0);
		if (b[count] == '1')
			num += pv;
		pv *= 2;
	}

	return (num);
}


/**
 * _strlen - returns the length of a string
 * @s: string to be measured
 * Return: length of string which is an integer
 **/

unsigned int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
