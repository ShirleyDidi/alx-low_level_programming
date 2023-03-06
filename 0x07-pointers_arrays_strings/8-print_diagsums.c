#include "main.h"
#include <stdio.h>
/**
* print_diagsums -  function that prints the sum of the two diagonals
* @a: a pointer
* @size: size
*/
void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0;
int sum2 = 0;
int n;
for (i = 0; i <= (size * size); i = i + size + 1)
sum1 = sum1 + a[i];
for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
sum2 = sum2 + a[n];
printf("%d, ", sum1);
printf("%d\n", sum2);
}
