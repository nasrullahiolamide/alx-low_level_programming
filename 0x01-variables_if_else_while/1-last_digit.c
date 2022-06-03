#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point of the code
 * description - This program prints the last digit of a number
 * Return: Always return 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int l = n % 10;

	l = abs(l);

	if (l > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	else if (l == 0)
		printf("Last digit of %d is %d and is 0\n", n, l);
	else if (l < 6 && l != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	/* your code goes there */
	return (0);
}
