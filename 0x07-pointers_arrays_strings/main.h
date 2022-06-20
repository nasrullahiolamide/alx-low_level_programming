#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 * Return: character to standard output
 */

int _putchar(char c);

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to memory area to fill
 * @b: byte to fill memory area with
 * @n: number of bytes to fill
 * Return: Character
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copies memory area
 * @dest: pointer to memory area to copy to
 * @src: pointer to memory area to copy from
 * @n: number of bytes to copy
 * Return: Character
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: character to search for
 * Return: pointer to character or NULL
 */
char *_strchr(char *s, char c);

/**
 * _strspn - return length of string that matches values consistently
 * @s: string to search
 * @accept: target matches
 * Return: number of bytes consecutively matched
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - return pointer to byte in s that matches a byte in accept
 * @s: string to search
 * @accept: target matches
 * Return: pointer to index of string at first occurence
 */
char *_strpbrk(char *s, char *accept);

/**
 * _strstr - locate and return pointer to first occurence of substring
 * @haystack: string to search
 * @needle: target substring to search for
 * Return: pointer to index of string at first occurence of whole substring
 */
char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - print chessboard given set 2D array
 * @a: 2D array
 */
void print_chessboard(char (*a)[8]);

/**
 * print_diagsums - print sums of diagonals in matrix
 * @a: matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size);

/**
 * set_string - set value of pointer to a char
 * @s: variable of type pointer
 * @to: char
 */
void set_string(char **s, char *to);

#endif /* MAIN_H */
