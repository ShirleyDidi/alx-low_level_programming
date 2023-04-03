#include "lists.h"
/**
* listint_len - function that return the number of elements in linked listint_t
* @h: a pointer
* Return: the number of elements
*/
size_t listint_len(const listint_t *h)
{
size_t nodes = 0;
while (h)
{
h = h->next;
nodes++;
}
return (nodes);
}
