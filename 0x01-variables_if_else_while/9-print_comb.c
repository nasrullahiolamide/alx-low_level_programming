#include <stdio.h>

/**
 * main - a program that prints all possible combinations of
 * single-digit numbers
 * Return: Always return 0
 */

int main(void)
{
	int i;
	int num;

	for (i = 0; i < 10; i++)
	{
		num = i + '0';
		putchar(num);
		if (num < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
