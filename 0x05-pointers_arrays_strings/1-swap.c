#include "main.h"

/**
 * swap_int - swap the values of two variables
 * @a: pointer to the first variable
 * @b: pointer to the second variable
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int newb;

	newb = *a;
	*a = *b;
	*b = newb;
}
