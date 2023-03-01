#include "main.h"
/**
* _strcat - concatenates two strings
* @dest: input value
* @src: input value
* Return: void
*/
char *_strcat(char *dest, char *src)
{
int i;
int d;
i = 0;
while (dest[i] != '\0')
{
i++;
}
d = 0;
while (src[d] != '\0')
{
dest[i] = src[d];
i++;
d++;
}
dest[i] = '\0';
return (dest);
}
