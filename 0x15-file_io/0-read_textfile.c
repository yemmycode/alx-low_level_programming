#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/*
* File: read_textfile.c
* Description: This function reads a text file and prints it to the standard output.
* Parameters:
* @filename: The name of the file to be read.
* @letters: The maximum number of letters to be read and printed.
* Return: The actual number of letters that were read and printed, or 0 on failure.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t n_read, n_written;
char *buffer;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buffer = malloc(letters * sizeof(char));

if (buffer == NULL)
{
close(fd);
return (0);
}

n_read = read(fd, buffer, letters);
if (n_read == -1)
{
free(buffer);
close(fd);
return (0);
}

n_written = write(STDOUT_FILENO, buffer, n_read);
if (n_written == -1 || !(n_written == n_read))

{
free(buffer);
close(fd);
return (0);
}

free(buffer);
close(fd);

return (n_written);
}
