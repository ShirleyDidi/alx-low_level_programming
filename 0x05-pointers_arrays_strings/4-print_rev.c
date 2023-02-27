#include "main.h"
/**
* print_rev - print in reverse
* @s: string
* Return: 0
*/
void print_rev(char *s)
{
int lenth = 0;
int o;
while (*s != '\0')
{
lenth++;
s++;
}
s--;
for (o = lenth; o > 0; o--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
