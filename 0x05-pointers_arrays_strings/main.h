#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 * Return: an int
 */

int _putchar(char c);

/**
* reset_to_98 - reset the value of a variable to 98
* @n: pointer to the variable to reset
* Return: void
*/

void reset_to_98(int *n);

/**
 * swap_int - swap the values of two variables
 * @a: pointer to the first variable
 * @b: pointer to the second variable
 * Return: void
 */
void swap_int(int *a, int *b);

/**
 * _strlen - returns the length of a string
 * @s: string to be measured
 * Return: length of string which is an integer
 **/
int _strlen(char *s);

/**
 * _puts - Prints out a string into std output
 * @str: string to read
 * Return : null
 */
void _puts(char *str);

/**
 * print_rev - Prints out a string into std output
 * @s: string to read
 * Return : null
 */
void print_rev(char *s);

/**
 * rev_string - reverse a string in memory
 * @s: string to read
 * Return : null
 */
void rev_string(char *s);

/** 
 * put2 - print every other character of a string
 * @str: string to read
 * Return : null
 */
void puts2(char *str);

/**
 * puts_half - prints half of a string, followed by a new line
 * @str : string to read
 * Return : null
 */
void puts_half(char *str);

#endif /* MAIN_H */
