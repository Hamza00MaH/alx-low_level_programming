#include "lists.h"

/**
* free_list - our function that frees node
* @head: pointer to the head of the Linkded-List
* Return: void
*/

void free_list(list_t *head)
{
list_t *nod = head;
if (head == NULL)
return (0);
free_list(head->next);
free(head);
}
