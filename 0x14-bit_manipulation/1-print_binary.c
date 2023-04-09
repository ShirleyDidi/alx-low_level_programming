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
if (n == 0)
_putchar('0');
return;
while ((hop & n) == 0)
{
hop >>= 1;
}
while (hop != 0)
{
if ((hop & n) == 0)
_putchar('0');
else
_putchar('1');
}
hop >>= 1;
}
