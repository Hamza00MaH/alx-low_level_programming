#include "lists.h"
#include "string.h"

/**
* add_node_end - our function that add node to the end
* @head: pointer to the head of the Linkded-List
* @str: pointer to nul-term
*  Return: number of nodes
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *add, *end;
size_t count;
add = malloc(sizeof(list_t));
if (add == NULL)
return (NULL);
add->str = strdup(str);
for (count = 0; str[count]; count++)
{};
add->len = count;
add->next = NULL;
end = *head;
if (*head == NULL)
{
*head = add;
}
else
{
while (end->next != NULL)
end = end->next;
end->next = add;
}
return (add);
}
