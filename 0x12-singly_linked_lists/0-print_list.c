#include "lists.h"

/**
* print_list - our function that print name
* @h: pointer to the head of the Linkded-List
* Return: number of nodes
*/

size_t print_list(const list_t *h)
{
size_t count = 0;
while (h)
{
if (!h->str)
printf("[%u] (nil)\n", 0);
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
count++;
}
return (count);
}
