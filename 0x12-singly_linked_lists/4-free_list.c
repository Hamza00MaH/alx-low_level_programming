#include "lists.h"

/**
* free_list - our function that frees node
* @head: pointer to the head of the Linkded-List
* Return: void
*/

void free_list(list_t *head)
{
list_t *nod = head;
while (head != NULL)
{
head = head->next;
free(nod->str);
free(nod);
}
}
