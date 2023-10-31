#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFSIZE 1024

/**
* @file file_copy.c
* @brief A program to copy the content of one file to another.
*/

/**
* @brief The main function for copying a file.
*
* @param argc The number of command-line arguments.
* @param argv An array of command-line arguments.
* @return 0 on success, an exit code on failure.
*/
int main(int argc, char *argv[])
{
int fd_from, fd_to, read_result, write_result;
char *buffer = (char *)malloc(BUFSIZE * sizeof(char));

if (buffer == NULL)
{
fprintf(stderr, "Error: Memory allocation failed.\n");
exit(1);
}


if (!(argc == 3))

{
fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
free(buffer);
exit(2);
}


fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
fprintf(stderr, "Error: Unable to read from file %s\n", argv[1]);
free(buffer);
exit(3);
}


fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
fprintf(stderr, "Error: Unable to write to %s\n", argv[2]);
close(fd_from);
free(buffer);
exit(4);
}


while ((read_result = read(fd_from, buffer, BUFSIZE)) > 0)
{
write_result = write(fd_to, buffer, read_result);
if (write_result != read_result)
{
fprintf(stderr, "Error: Unable to write to %s\n", argv[2]);
close(fd_from);
close(fd_to);
free(buffer);
exit(5);
}
}


if (read_result == -1)
{
fprintf(stderr, "Error: Unable to read from file %s\n", argv[1]);
close(fd_from);
close(fd_to);
free(buffer);
exit(6);
}


if (close(fd_from) == -1)
{
fprintf(stderr, "Error: Unable to close fd %d\n", fd_from);
close(fd_to);
free(buffer);
exit(7);
}


if (close(fd_to) == -1)
{
fprintf(stderr, "Error: Unable to close fd %d\n", fd_to);
free(buffer);
exit(8);
}


free(buffer);

return (0);
}
