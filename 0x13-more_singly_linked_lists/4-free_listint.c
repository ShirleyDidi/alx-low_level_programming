#include "lists.h"
#include <stdio.h>
/**
* free_listint - free a list
* @head: address of the first node of a list
*/
void free_listint(listint_t *head)
{
listint_t *jk, *jk1;
jk = head;
while (jk != NULL)
{
jk1 = jk->next;
free(jk);
jk = jk1;
}
}
