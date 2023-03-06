#include "main.h"
#include <stdio.h>
/**
* print_diagsums -  function that prints the sum of the two diagonals of a square matrix of integers
* @a: a pointer
* @size: size
*/
void print_diagsums(int *a, int size)
{
int i;
sumone = 0;
sumtwo = 0;
for (i = 0; i < size; i++)
{
sumone += *(a + (size * i + i));
sumtwo += *(a + (size * i + size - 1 - i));
}
printf("%d, ", sumone);
printf("%d\n", sumtwo);
}
