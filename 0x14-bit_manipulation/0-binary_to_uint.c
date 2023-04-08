#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: pointing to a string of 0 and 1 chars
* Return: the converted number, or 0
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int art = 0;
int a;
if (b == NULL)
return (0);
for (a = 0; b[a] != '\0'; a++)
{
if (b[a] < '0' || b[a] > '1')
return (0);
}
art = (art << 1) | (b[a] - '0');
return (art);
}
