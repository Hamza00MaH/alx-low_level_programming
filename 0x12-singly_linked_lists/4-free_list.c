#include "lists.h"

/**
* free_list - our function that frees node
* @head: pointer to the head of the Linkded-List
* Return: void
*/

void free_list(list_t *head)
{
if (head == NULL)
return;
free_list(head->next);
free(head);
}
