#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
* @file append_text_to_file.c
* @brief: file contains a function to append text to the end of an existing file.
*/

/**
* @brief Appends text to the end of an existing file.
*
* This function appends text to the end of the specified file. If the file
* does not exist, it will return -1. If the file exists and the text is
* successfully appended, it will return 1. In case of any other errors,
* it will also return -1.
*
* @param filename The name of the file to which text will be appended.
* @param text_content A NULL-terminated string to be added to the end of the file.
* @return 1 on success, -1 on failure (including file not found).
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t n_written;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
n_written = write(fd, text_content, strlen(text_content));
if (n_written == -1)
{
close(fd);
return (-1);
}
}

close(fd);

return (1);
}
