#include "main.h"
/**
* get_endianness - function that checks the endianness
* Return: 0 if big endia, 1 if little endia
*/
int get_endianness(void)
{
unsigned int b = 1;
char *c = (char *) &b;
return (*c);
}
