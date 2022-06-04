#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;
int number;
	for (num = 48 ; num < 58 ; num++)
	{
		for (number = 48 ; number < 58 ; number++)
	{
		if (num < number && num <= number && num != number)
		{
			putchar(num);
			putchar(number);
			if (number != 57 || num != 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
}
