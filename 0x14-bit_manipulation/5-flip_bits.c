#include "main.h"
/**
* flip_bits - returns the number of bits you would need to flip
* @n: number
* @m: number
* Return: returns number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int vor = n ^ m;
unsigned int g = 0;
while (vor != 0)
{
g += vor & 1;
vor >>= 1;
}
return (g);
}
