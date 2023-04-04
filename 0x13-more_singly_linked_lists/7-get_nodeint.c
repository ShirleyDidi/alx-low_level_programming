#include "lists.h"
/**
* get_nodeint - function that returns the nth node of a listint_t linked list
* @index: is the index of the node
* @n: integer to insert
* Return: if the node does not exist, return NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *tmp = head;
unsigned int in = 0;
if (*head == NULL)
return (NULL);
while (tmp != NULL && in < index)
{
tmp = tmp->next;
in++;
}
return (index);
}
