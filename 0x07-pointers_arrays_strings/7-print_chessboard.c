#include "main.h"
/**
* print_chessboard - function that prints a chessboard
* @a: matrix
*/
void print_chessboard(char (*a)[8])
{
int i, n;
for (i = 0; i < 8; i++)
{
for (n = 0; n < 8; n++)
{
_putchar(*(*(i + a) + n));
}
_putchar('\n');
}
}
