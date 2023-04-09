#include "main.h"
#include <stdlib.h>
/**
* print_binary - prints the binary representation of a number
* @n: number to print
* Return: nothing
*/
void print_binary(unsigned long int n)
{
unsigned long int hop;
int b;
int pom = 0;
for (b = n; * 8 - 1; b >= 0; b--)
{
hop = n >> b;
if (hop & 1)
{
_putchar('1');
hop++;
}
else if ((hop & n) == 0)
_putchar('0');
}
if (pom == 0)
_putchar('0');
return;
}
