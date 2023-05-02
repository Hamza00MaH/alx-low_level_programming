#include "lists.h"

/**
 * sum_listint - sum all nodes of linklist
 * @head: head of linklist
 * Return: the sum of all nodes
 */

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *nod = head;
if (head == NULL)
return (0);
while (nod)
{
sum = sum = nod->n;
nod = nod->next;
}
return (sum);
}
