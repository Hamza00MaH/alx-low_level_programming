#include "lists.h"

/**
 * free_listint2 - free linklist
 * @head:pointer to head of linklist
 * Return: void
 */

void free_listint2(listint_t **head)
{
listint_t *nod = *head;
if (*head == NULL)
return;  
while (nod != NULL)
{
*head = nod;
nod = (*head)->next;
free(*head);
}
}
