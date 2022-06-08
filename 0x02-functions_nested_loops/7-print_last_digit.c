#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @num : number to check
 * Return: return the last digit of a number
 */

int print_last_digit(int num)
{
	int last;
	int positive;

	last = num % 10;
	if (last >= 0)
	{
		_putchar(last + '0');
		return (last);
	}
	else
	{
		positive = last * -1;
		_putchar(positive + '0');
		return (positive);
	}
}
