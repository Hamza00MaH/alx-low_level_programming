#include "lists.h"

/**
 * add_nodeint_end - add new node to the end of linklist
 * @head:pointer to head of linklist
 * @n: new node
 * Return:the address of the new nodes or null if it fail
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *nn_end = malloc(sizeof(listint_t));
listint_t *last_n = *head;
if (nn_end == NULL)
return (NULL);
nn_end->n = n;
nn_end->next = NULL;
if (*head == NULL)
{
*head = nn_end;
return (*head);
}
while (last_n->next)
{
last_n = last_n->next;
}
last_n->next = nn_end;
return (nn_end);
}
