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


#endif
