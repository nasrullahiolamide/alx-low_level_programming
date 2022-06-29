#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, j = 0;
	static int len1, len2;

	if (s1 == NULL)  /* Check for NULL */
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++) /* Check for length of str */
	{
		len1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		len2++;
	}
	concat_str = malloc(sizeof(char) * (len1 + len2 + 1)); /* allocate memory */
	if (concat_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len1; i++)
	{
		*(concat_str + i) = *(s1 + i);
	}
	for (i = len1; i <= (len1 + len2); i++)
	{
		*(concat_str + i) = *(s2 + j);
		j++;
	}
	return (concat_str);
}
