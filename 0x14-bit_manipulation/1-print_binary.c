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
hop = 1UL << (sizeof(unsigned long int));
while (mask > 0)
{
if (n & hop)
{
putchar('1');
}
else
{
putchar('0');
}
hop >>= 1;
}
}
