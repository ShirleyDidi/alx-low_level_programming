#include "main.h"
#include <limits.h>
#include <stdio.h>
/**
* get_bit - sets the value of a bit to 1 at a given index
* @n: number
* @index: index of a bit
* Return: 1 if it worked, or -1 if an error occurred
*/
int get_bit(unsigned long int n, unsigned int index)
{
int value;
if (index >= sizeof(unsigned long int) * CHAR_BIT)
return (-1);
value = (n >> index) & 1;
return (value);
}
