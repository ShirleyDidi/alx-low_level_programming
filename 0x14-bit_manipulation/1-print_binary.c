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
int a;
if (n & (1 << a))
_putchar('1');
{
else
{
_putchar('0');
for (a = 63; a >= 0; a--)
{
cuse = n >> a;
}
if (!cuse)
_putchar('0');
}
