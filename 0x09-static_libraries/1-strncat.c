#include "main.h"
/**
* _strncat - concatenate two strings
* using at most n bytes from src
* @dest: input value
* @src: input value
* @n: input value
* Return: void
*/
char *_strncat(char *dest, char *src, int n)
{
int i;
int d;

i = 0;
while (dest[i] != '\0')
{
i++;
}
d = 0;
while (d < n && src[d] != '\0')
{
dest[i] = src[d];
i++;
d++;
}
dest[i] = '\0';
return (dest);
}
