#include "main.h"

/*
 * string_copy - This function copies the string pointed to by src to dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the destination buffer.
 */
char *string_copy(char *dest, const char *src)
{
char *dest_ptr = dest;
    
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
    
return dest_ptr;
}
