#include <stdio.h>
/**
* main - A program that prints the sizeof various computer types
* Return 0 (Success)
*/
void main(void)
{
printf("Size of char: 1 byte(s)\n", sizeof(char));
printf("Size of an int: 4 byte(s)\n", sizeof(int));
printf("Size of a long int: 8 byte(s)\n", sizeof(long int));
printf("Size of a long long int: 8 byte(s)\n", sizeof(long long int));
printf("Size of a float: 4 byte(s)\n", sizeof(float));
return (0);
}
