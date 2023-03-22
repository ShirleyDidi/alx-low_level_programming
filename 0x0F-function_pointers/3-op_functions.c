#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
* op_add - adds sums of a and b
* @a: sum of a
* @b: sum of b
* Return: returns sum of a and b
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
* op_sub - subtracts sums of a and b
* @a: sub of a
* @b: sub of b
* Return: returns difference of a and  b
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
* op_mul - multiplies sums of a and b
* @a: times of a
* @b: times of b
* Return: returns the product of a and b
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
* op_div - divides sums of a and b
* @a: division of a
* @b: division of b
* Return: result of the division of a by b
*/
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
* op_mod - remainders of a and b of division
* @a: remainder of a
* @b: remainder of b
* Return: returns the remainder of the division of a by b
*/
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
