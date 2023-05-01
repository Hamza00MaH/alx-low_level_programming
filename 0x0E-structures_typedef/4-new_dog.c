#include "dog.h"

/**
 * new_dog - function that create new dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Description: create new dog struct
 * Return:  new dog info
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new;
new = malloc(sizeof(dog_t));
if (new == NULL)
return (NULL);
(*new).name = strdup(name);
if ((*new).name == NULL)
{
free(new);
return (NULL);
}
(*new).age = age;
(*new).owner = strdup(owner);
if ((*new).owner == NULL)
{
free((*new).name);
free(new);
return (NULL);
}
return (new);
}
