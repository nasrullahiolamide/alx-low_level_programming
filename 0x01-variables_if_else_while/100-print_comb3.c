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
int num1;
int num2;
	for (num1 = 48 ; num1 < 58 ; num1++)
	{
		for (num2 = 48 ; num2 < 58 ; num2++)
	{
		if (num1 < num2 && num1 <= num2 && num1 != num2)
		{
			putchar(num1);
			putchar(num2);
			if (num2 != 57 || num1 != 56)
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
