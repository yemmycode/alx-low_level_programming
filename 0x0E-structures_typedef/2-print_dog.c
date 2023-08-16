#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Displays the attributes of a struct dog.
 * @d: Pointer to the struct dog to display.
 */
void print_dog(struct dog *d) 
{
if (!d) 
{
return;
}

printf("Name: %s\n", (d->name) ? d->name : "(nil)");
    
if (d->age >= 0) 
{
printf("Age: %f\n", d->age);
} 
else 
{
printf("Age: (nil)\n");
}
    
printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
}
