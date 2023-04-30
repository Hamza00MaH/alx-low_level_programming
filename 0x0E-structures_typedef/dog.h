#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - our struct for dogs
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Description: simple struct regrp some info about dog
 */

struct dog
{
char *name;
float age;
char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*DOG_H*/
