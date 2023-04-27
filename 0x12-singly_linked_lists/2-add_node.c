#include "lists.h"
#include <string.h>

/**
* add_note - our function that add new node at head
* @head: pointer to the head of the Linkded-List
* @str:pointer to nul-term
* Return: number of nodes
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *add;
size_t count;
add = malloc(sizeof(list_t));
if (add == NULL)
return (NULL);
add->str = strdup(str);
for (count = 0; str[count]; count++);
add->len = count;
add->next = *head;
*head = add;
return (add);
}
