#include "dog.h"

/**
 * free_dog - function freedom for dog data
 * @d: poiter to typedef struct
 * Description: free memory that contain data of dog
 */

void free_dog(dog_t *d)
{
if (d != NULL)
free((*d).name);
free((*d).owner);
free(d);
else
return (NULL);
}
