#include "lists.h"
/**
* get_nodeint_at_index - returns the nth node of a listint_t linked list
* @head: pointer to address
* @index: is the index of the node
* Return: if the node does not exist, return NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *tmp = head;
unsigned int iz = 0;
for (iz = 0; iz < index && tmp != NULL; iz++)
{
tmp = tmp->next;
}
while (tmp != NULL && iz < index)
{
tmp = tmp->next;
iz++;
}
return (tmp);
}
