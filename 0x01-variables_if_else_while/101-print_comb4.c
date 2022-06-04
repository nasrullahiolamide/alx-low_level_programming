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
int a;
int b;
int c;
for (a = 48 ; a < 58 ; a++)
{
for (b = 48 ; b < 58 ; b++)
{
for (c = 48 ; c < 58 ; c++)
{
if (c != a && c != b && a != b && a < b && b < c && a < c)
{
putchar(a);
putchar(b);
putchar(c);
if (c != 57 || b != 56 || a != 55)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
