#include "lists.h"

/**
* listint_len - function returns the number of elements in a linked listint_t
* @h: pointer to the head of the Linkded-List
* Return: number of nodes
*/

size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h)
{
count++;
h = h->next;
}
return (count);
}
