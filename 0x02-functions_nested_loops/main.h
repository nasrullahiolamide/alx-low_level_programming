#ifndef _main_h_
#define _main_h_

/**
 * _putchar - the only function that prints a character in this project
 * @c : character to check
 * Return: return 1 if success and 0 is not
 */
int _putchar(char c);

/**
 * print_alphabet - Print all alphabets in small letter
 * Return:  void
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - Print alphabet 10 times
 * Return: 0
 */
void print_alphabet_x10(void);

/**
 * _islower - a function that checks for lowercase character.
 * @c: a character to be checked and returns either trueor false.
 * Return: 0 if false and 1 if true.
 */
int _islower(int c);

/**
 * is_alpha - check if a character is an alphabet
 * @c : character to check
 * Return: return 1 if success and 0 is not
 */
int _isalpha(int c);

/**
 * print_sign - print sign of a number
 * @n : number to check
 * Return: 1 and prints + if n is greater than zero,
 * 0 and prints 0 if n is zero, and - and prints - if n is less than zero.
 */
int print_sign(int n);

/**
 * _abs - return absolute value of a number
 * @n : number to check
 * Return: return absolute value of a number
 */
int _abs(int n);


/**
 * print_last_digit - print the last digit of a number
 * @num : number to check
 * Return: return the last digit of a number
 */
int print_last_digit(int num);

/**
 * jack_bauer - print every minutes of the day
 * Return: null
 */
void jack_bauer(void);


/**
 * times_table - print the n times table
 * Return: null
 */
void times_table(void);

/**
 * add - add two numbers
 * @n1 : number to check
 * @n2 : number to check
 * Return: return the sum of two numbers
 */
int add(int n1, int n2);

#endif
