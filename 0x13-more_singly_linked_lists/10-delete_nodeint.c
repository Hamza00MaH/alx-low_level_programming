#include "lists.h"

/**
 * delete_nodeint_at_index - delete index node
 * @head: head of linklist
 * @index: the pose to remove
 * Return: 1 succed -1 fail
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int count = 0;
listint_t *nod = *head;
listint_t *p_n = NULL;
while (nod)
{
if (count == index)
{
if (p_n == NULL)
{
*head = nod->next;
free(nod);
return (1);
}
p_n->next = nod->next;
free(nod);
return (1);
}
p_n = nod;
nod = nod->next;
count++;
}
return (-1);
}
