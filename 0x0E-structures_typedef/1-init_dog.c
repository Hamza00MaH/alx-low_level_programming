#include "dog.h"

/**
 * init_dog - function inti dog inf
 * @d: poiter to typedef struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Description: init info of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
