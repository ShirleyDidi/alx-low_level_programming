#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint - add a node at the beginning of a list
* @head: address of the first node
* @n: integer
* Return: address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *kl;
kl = malloc(sizeof(listint_t));
if (kl == NULL)
return (NULL);
kl->n = n;
*head = kl;
kl->next = *head;
return (*head);
}
