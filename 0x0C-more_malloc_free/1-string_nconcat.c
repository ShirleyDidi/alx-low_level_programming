#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - concatenates n bytes of a string to another string
* @s1: string to append to
* @s2: string to concatenate from
* @n: number of bytes from s2 to concatenate to s1
* Return: pointer to the resulting string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i])
i++;
while (s2[len1])
len1++;
if (n >= len1)
len2 = i + len1;
else
len2 = i + n;
s = malloc(sizeof(char) * len2 + 1);
if (s == NULL)
return (NULL);
len1 = 0;
while (j < len2)
{
if (j <= i)
s[j] = s1[j];
if (j >= i)
{
s[j] = s2[len1];
len1++;
}
j++;
}
s[j] = '\0';
return (s);
}
