#include "lists.h"

/**
 * free_listint - free linklist
 * @head:pointer to head of linklist
 * Return: void
 */

void free_listint(listint_t *head)
{
listint_t *nod;
while (head != NULL)
{
nod = head;
head = head->next;
free(nod);
}
}
