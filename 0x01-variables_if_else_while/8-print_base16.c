#include <stdio.h>

/**
 * main - a program that prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * description - All function eg putchar and returns is in the function
 * Return: Always return 0
 */

int main(void)
{
	int i;
	char digit;
	char letters = 'a';

	while (i <= 9)
	{
		digit = i + '0';
		putchar(digit);
		i++;
	}
	while (letters <= 'f')
	{
		putchar(letters);
		letters++;
	}

	putchar('\n');
	return (0);
}
