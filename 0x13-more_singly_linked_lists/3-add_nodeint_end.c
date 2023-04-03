#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* add_nodeint_end - adds a new node at the end of a listint_t of a list
* @head: address of the first node
* @n: integer to insert
* Return: address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ight, ight1;
ight = malloc(sizeof(listint_t));
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
