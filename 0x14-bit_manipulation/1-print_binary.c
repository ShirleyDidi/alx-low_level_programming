#include "main.h"
#include <stdio.h>
/**
* print_binary - prints the binary representation of a number
* @n: number to print
* Return: nothing
*/
void print_binary(unsigned long int n)
{
unsigned long int cuse;
int a, vux = 0;
for (a = 63; a >= 0; a--)
{
cuse = n >> a;
if (cuse & 1)
{
_putchar('1');
vux++;
}
else if (vux)
_putchar('0');
}
if (!vux)
_putchar('0');
}
