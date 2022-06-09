#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point of the program
 * description - To determine whether a number is negative or positive
 * Return: always return 0
 */
void positive_or_negative(int n)
{
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
        else if (n == 0)
                printf("%d is zero\n", n);
}