#include "main.h"
/**
* clear_bit - sets the value of a bit to 0 at a given index
* @index: index of a bit
* @n: number
* Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (0);
}
cast = ~(1UL << index);
*n &= ~cast;
return (1);
}
