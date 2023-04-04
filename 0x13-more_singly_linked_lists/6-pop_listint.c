#include "lists.h"
/**
* pop_listint - deletes the head node of a listint_t linked list
* @head: a pointer to address
* @n: integer to insert
* Return: 0
*/
int pop_listint(listint_t **head)
{
listint_t *grt;
if (head == NULL)
return;
else
{
*grt = head;
head = head->n;
free(grt)
grt = NULL;
}
return (head);
}
