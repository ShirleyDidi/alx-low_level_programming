#include "main.h"
#include <limits.h>
#include <stdio.h>
/**
* set_bit - sets the value of a bit to 1 at a given index
* @n: number
* @index: index of a bit
* Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
int jax;
if (index >= sizeof(unsigned long int) * CHAR_BIT)
return (-1);
jax = (n << index);
return (1);
}
