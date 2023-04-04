#include "lists.h"
/**
* pop_listint - deletes the head node of a listint_t linked list
* @head: a pointer to address
* Return: 0
*/
int pop_listint(listint_t **head)
{
listint_t *grt;
int n;
if (*head == NULL)
{
return (0);
}
grt = *head;
*head = (*head)->next;
n = grt->n;
free(grt);
return (n);
}
