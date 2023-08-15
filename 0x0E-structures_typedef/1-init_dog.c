#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: pointer to the dog to initialize.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d) 
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
