#include "main.h"
#include<string.h>
/**
* _strcpy - copycat
* @dest: the recipient variable
* @src: the source variable
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int i;
i = 0;
while (i >= 0)
{
*(dest + i) = *(src + i);
if (*(src + i) == '\0')
{
break;
}
i++;
}
return (dest);
}
