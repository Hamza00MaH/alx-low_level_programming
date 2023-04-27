#include "lists.h"

/**
* list_len - our function that print name
* @h: pointer to the head of the Linkded-List
* Return: number of nodes
*/

size_t list_len(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
