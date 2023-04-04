#include "lists.h"
/**
* free_listint2 - frees listint_t list
* @head: a pointer to the address
* Return: set head to NULL
*/
void free_listint2(listint_t **head)
{
listint_t *ger;
if (head == NULL)
return;
while (*head)
{
ger = (*head)->next;
free(*head);
*head = ger;
}
*head = NULL;
}
