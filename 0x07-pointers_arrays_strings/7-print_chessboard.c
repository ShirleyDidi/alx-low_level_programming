#include "main.h"
/**
* print_chessboard - function that prints a chessboard
* @a: array
* Return: always 0 (Success)
*/
void print_chessboard(char (*a)[8])
{
int i;
int n;
for (i = 0; i < 8; i++)
{
for (n = 0; n < 0; n++)
_putchar(a[i][n]);
_putchar('\n');
}
}
