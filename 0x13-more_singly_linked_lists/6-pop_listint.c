#include "lists.h"

/**
 * pop_listint - delete the head
 * @head:pointer to head of linklist
 * Return: head node data
 */

int pop_listint(listint_t **head)
{
listint_t *nod = *head;
int data;
if (*head == NULL)
return (0);
*head = (*head)->next;
data = nod->n;
free(nod);
return (data);
}
