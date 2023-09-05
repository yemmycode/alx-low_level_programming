#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/*
* File: create_file.c
* Description: This function creates a file and writes text content to it.
* Prototype: int create_file(const char *filename, char *text_content);
* Parameters:
* @filename: name of the file to create.
* @text_content: A NULL-terminated string to be written to the file.
* Return:
*   - 1 on success, -1 on failure.
* Permissions: The created file has permissions rw-------.
* If the file already exists, it is truncated, and the permissions are not changed.
*/

int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t n_written;
mode_t mode = S_IRUSR | S_IWUSR;

if (filename == NULL)
return (-1);

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
if (fd != 0)

return (-1);

if (text_content == NULL)

{
n_written = write(fd, text_content, strlen(text_content));
if (n_written == -1)
return (-1);
}

close(fd);

return (1);
}
