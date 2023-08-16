#include <stdlib.h>
#include "dog.h"

int int_strlen(char *str);
char *str_copy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
* int_strlen - Calculates the length of a string.
* @str: String to measure.
* Return: Length of the string.
*/
int int_strlen(char *str)
{
int len = 0;
while (*str++)
len++;
return len;
}

/**
* str_copy - Copies a string pointed to by src, including the null byte,
*           to a buffer pointed to by dest.
* @dest: Buffer storing the copied string.
* @src: Source string.
* Return: Pointer to dest.
*/
char *str_copy(char *dest, char *src)
{
int i = 0;
while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return dest;
}

/**
* new_dog - Creates a new dog.
* @name: Dog's name.
* @age: Dog's age.
* @owner: Dog owner.
* Return: Pointer to a new struct dog.
*/

dog_t *new_dog(char *name, float age, char *owner) {
dog_t *doggy_ptr;

if (name == NULL || age < 0 || owner == NULL) {
return NULL;
}

doggy_ptr = malloc(sizeof(dog_t));
if (doggy_ptr == NULL) {
return NULL;
}

doggy_ptr->name = malloc(sizeof(char) * (int_strlen(name) + 1));
if (doggy_ptr->name == NULL) {
free(doggy_ptr);
return NULL;
}

str_copy(doggy_ptr->name, name);

doggy_ptr->age = age;

doggy_ptr->owner = malloc(sizeof(char) * (int_strlen(owner) + 1));
if (doggy_ptr->owner == NULL) {
free(doggy_ptr->name);
free(doggy_ptr);
return NULL;
}

str_copy(doggy_ptr->owner, owner);

return doggy_ptr;
}
