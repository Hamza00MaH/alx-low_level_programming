#include "lists.h"

/**
* print_list - our function that print name
* @h: pointer to the head of the Linkded-List
* Return: number of nodes
*/

size_t print_list(const list_t *h)
{
size_t count = 0;
if (!h->str)
{
printf("[0] (nil)\n");
}
while (h != NULL)
{
printf("[%ld] %s\n", h->len, h->str);
h = h -> next;
count++;
}
return (count);
}
