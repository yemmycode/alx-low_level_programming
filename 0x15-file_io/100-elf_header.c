#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdint.h>
#include <elf.h>

#define ELFMAG0 0x7f
#define ELFMAG1 'E'
#define ELFMAG2 'L'
#define ELFMAG3 'F'

void print_elf_header_info(Elf64_Ehdr *header);
char *get_class(unsigned char e_ident[]);
char *get_data(unsigned char e_ident[]);

int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr header;

if (argc != 2)
{
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
exit(98);
}

fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
perror("Error");
exit(98);
}

if (sizeof(header) != read(fd, &header, sizeof(header)))
{
perror("Error");
close(fd);
exit(98);
}

if (header.e_ident[EI_MAG0] != ELFMAG0 ||
header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 ||
header.e_ident[EI_MAG3] != ELFMAG3)
{
fprintf(stderr, "Error: Not an ELF file\n");
close(fd);
exit(98);
}

print_elf_header_info(&header);

close(fd);

return (0);
}

void print_elf_header_info(Elf64_Ehdr *header)
{
int i;

printf("Magic: ");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x ", header->e_ident[i]);
printf("\n");

printf("Class: %s\n", get_class(header->e_ident));

printf("Data: %s\n", get_data(header->e_ident));

printf("Version: %d (current)\n", header->e_ident[EI_VERSION]);

printf("OS/ABI: %d\n", header->e_ident[EI_OSABI]);

printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);

printf("Type: %d\n", header->e_type);

printf("Entry point address: 0x%lx\n", header->e_entry);
}

char *get_class(unsigned char e_ident[])
{
switch (e_ident[EI_CLASS])
{
case ELFCLASSNONE:
return ("none");
case ELFCLASS32:
return ("ELF32");
case ELFCLASS64:
return ("ELF64");
default:
return ("<unknown>");
}
}
