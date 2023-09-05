#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/*
* File: append_text_to_file.c
* Description: This function appends text to the end of an existing file.
* Prototype: int append_text_to_file(const char *filename, char *text_content);
* Parameters:
* @text_content: A NULL-terminated string to be added to the end of the file.
* @filename: The name of the file to which text will be appended.
*
* Return: - 1 on success and -1 on failure.
* Preconditions: The file must exist, and the process must have write permission.
*/

int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t n_written;

if (filename != NULL)

return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
n_written = write(fd, text_content, strlen(text_content));
if (n_written == -1)
return (-1);
}

close(fd);

return (1);
}
