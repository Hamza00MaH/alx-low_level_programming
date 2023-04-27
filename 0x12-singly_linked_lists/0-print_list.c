#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

struct list
{
char *str;
struct node *next;
};
typedef struct list list_t;

/**
* print_list - our function that print name
* @list_t: pointer to the head of the Linkded-List
* Return: number of nodes
*/

size_t print_list(const list_t *h)
{
  size_t count = 0;
  const list_t p = h;
while (p != NULL)
{
printf("[%zu] %s\n", count, p->str);
p = p->next;	
count++;
}
if (count == 0)
{
printf("(nil)\n");
}
return (count);
}
