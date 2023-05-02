#include "lists.h"

/**
 * get_nodeint_at_index - get the linked list much you want
 * @head: the haed of linkedlist
 * @index: the number of times of linked list
 * Return: linked list at the index num
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
listint_t *nod = head;
while (nod)
{
if (count == index)
return (nod);
else
{
nod = nod->next;
count++;
}
}
return (NULL);
}
