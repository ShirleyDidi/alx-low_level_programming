#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint_end - function that adds a new node at the end of a listint_t
* @head: address of the first node
* @n: integeter
* Return: address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ight, ight1;
if (ight == NULL)
return (NULL);
ight->n = n;
ight->next = NULL;
if (*head == NULL)
{
*head = ight;
return (ight);
}
ight1 = *head;
while (ight1->next)
ight1 = ight1->next;
ight1->next = ight;
return (ight);
}
