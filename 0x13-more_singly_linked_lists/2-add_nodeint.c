#include "lists.h"

/**
 * add_nodeint - add new node to the beginning of linklist
 * @head:pointer to head of linklist
 * @n: new node
 * Return:the address of the new nodes or null if it fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
 listint_t *n_n = malloc(sizeof(listint_t));
if (n_n == NULL)
return(NULL);
n_n->n = n;
n_n->next = *head;
*head = n_n;
return (*head);
}
