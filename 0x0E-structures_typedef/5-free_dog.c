#include <stdlib.h>
#include "dog.h"

/**
* free_dog - Frees memory allocated for a dog.
* @d: Pointer to the dog to be freed.
*/
void free_dog(dog_t *d)
{
if (!d)
{
return;
}

free(d->owner);
free(d->name);
free(d);
}
