#include <stdio.h>
#include "main.h"

/**
* print_array - prints the n elements of an array
* @a: the array
* @n: the number of elements to be printed
* Return: Always 0 (Success)
*/
void print_array(int *a, int n)
{
int i;
for (i = 0 ; i <= (n - 1) ; i++)
{
printf("%d", *(a + i));
if (i != (n - 1))
printf(", ");
}
printf("\n");
}
