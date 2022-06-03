#include <stdio.h>

/**
 * main - Entry point of the code
 * description - All function eg putchar and returns is in the function
 * Return: Always return 0
 */

int main(void)
{
	int i;
	char number;

	for (i = 0; i < 10; i++)
	{
		number = i + '0';
		putchar(number);
	}
	putchar('\n');
	return (0);
}
