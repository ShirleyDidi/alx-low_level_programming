#include "lists.h"
/**
* free_listint2 - frees listint_t list
* @head: a pointer to the address
* Return: 0
*/
void free_listint2(listint_t **head)
{
listint_t *gert;
if (head == NULL)
return (0);
while (*head)
{
gert = *head->next;
free(*head);
*head = gert;
}
return (head);
}
